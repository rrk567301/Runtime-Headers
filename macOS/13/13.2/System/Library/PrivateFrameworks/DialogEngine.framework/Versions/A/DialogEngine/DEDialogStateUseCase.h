@interface DEDialogStateUseCase : DEDialogState

- (double)lastTimestamp;
- (int)usageCount;
- (id)allRandomIds;
- (BOOL)hasAllRandomId:(id)a0;
- (id)lastRandomIds;
- (id)groundingUsage:(id)a0;
- (id)allGroundings;

@end
