@interface _NSSharedValueTransformer : NSValueTransformer

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (char)_isBooleanTransformer;

@end
