@interface CropInteractionContext : NSObject

@property unsigned long long keyModificationMask;

- (BOOL)shouldPreserveTargetArea;
- (BOOL)shouldUpdateViewportOnEndInteractive;

@end
