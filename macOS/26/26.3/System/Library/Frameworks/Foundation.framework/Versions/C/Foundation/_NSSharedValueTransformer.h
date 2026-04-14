@interface _NSSharedValueTransformer : NSValueTransformer

- (id)copy;
- (id)autorelease;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (BOOL)_isBooleanTransformer;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
