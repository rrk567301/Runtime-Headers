@interface NSContentSizeLayoutConstraint : NSLayoutConstraint

@property (readonly) double huggingPriority;
@property (readonly) double compressionResistancePriority;

- (double)priorityForVariable:(id)a0;
- (id)initWithLayoutItem:(id)a0 value:(double)a1 huggingPriority:(double)a2 compressionResistancePriority:(double)a3 orientation:(long long)a4;
- (id)_priorityDescription;

@end
