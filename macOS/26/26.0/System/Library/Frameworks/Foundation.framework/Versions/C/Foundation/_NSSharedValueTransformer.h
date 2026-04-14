@interface _NSSharedValueTransformer : NSValueTransformer

- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isBooleanTransformer;
- (BOOL)_tryRetain;
- (id)copy;
- (id)retain;
- (oneway void)release;

@end
