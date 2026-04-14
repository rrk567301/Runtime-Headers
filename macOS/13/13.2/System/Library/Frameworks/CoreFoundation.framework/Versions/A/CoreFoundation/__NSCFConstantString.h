@class NSString;

@interface __NSCFConstantString : __NSCFString <NSRedactedDescription>

@property (readonly, copy) NSString *redactedDescription;

- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNSCFConstantString__;

@end
