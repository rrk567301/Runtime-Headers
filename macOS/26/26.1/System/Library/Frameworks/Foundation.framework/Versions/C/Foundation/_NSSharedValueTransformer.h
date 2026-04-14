@interface _NSSharedValueTransformer : NSValueTransformer

- (id)copy;
- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)_isBooleanTransformer;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;

@end
