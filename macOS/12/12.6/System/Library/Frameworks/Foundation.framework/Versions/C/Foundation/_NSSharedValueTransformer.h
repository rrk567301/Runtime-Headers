@interface _NSSharedValueTransformer : NSValueTransformer

- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isBooleanTransformer;

@end
