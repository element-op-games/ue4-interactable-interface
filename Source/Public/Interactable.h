#pragma once

#include "Interactable.generated.h"

UINTERFACE(BlueprintType)
class UInteractable : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IInteractable
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UI")
	void Interact();
};
