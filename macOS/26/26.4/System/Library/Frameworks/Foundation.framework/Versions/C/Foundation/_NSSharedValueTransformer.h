@interface _NSSharedValueTransformer : NSValueTransformer

- (BOOL)_tryRetain;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (id)copy;
- (id)retain;
- (BOOL)_isBooleanTransformer;
- (oneway void)release;

@end
