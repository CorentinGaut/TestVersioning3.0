// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TESTVERSION_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public: UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test)
		float Yolo;

public: UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test)
	float YoloDeThomas;
	
public:	
	// Sets default values for this actor's properties
	AMyActor();


	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Coco)
	 float YoloCorentin;
	
	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	public:	
		// Called every frame
		virtual void Tick(float DeltaTime) override;

};
