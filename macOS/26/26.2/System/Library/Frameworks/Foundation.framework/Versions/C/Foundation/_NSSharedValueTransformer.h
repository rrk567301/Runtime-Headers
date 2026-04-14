@interface _NSSharedValueTransformer : NSValueTransformer

- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isBooleanTransformer;
- (id)autorelease;
- (id)copy;
- (oneway void)release;

@end
