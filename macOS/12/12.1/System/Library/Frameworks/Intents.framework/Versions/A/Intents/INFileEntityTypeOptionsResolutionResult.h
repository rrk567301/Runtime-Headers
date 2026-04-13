@interface INFileEntityTypeOptionsResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedFileEntityTypeOptions:(unsigned long long)a0;
+ (id)confirmationRequiredWithFileEntityTypeOptionsToConfirm:(unsigned long long)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
