@class CALayer;

@interface IKSSThumbnailLayer : CALayer

@property BOOL invalidated;
@property CALayer *spinner;
@property unsigned long long index;

- (void)setContents:(id)a0;
- (id)init;
- (void)addSpinnerWithProgressAnimation:(id)a0;
- (void)removeSpinner;

@end
