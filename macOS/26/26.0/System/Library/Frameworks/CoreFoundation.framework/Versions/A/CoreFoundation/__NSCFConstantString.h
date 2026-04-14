@class NSString;

@interface __NSCFConstantString : __NSCFString <NSRedactedDescription>

@property (readonly, copy) NSString *redactedDescription;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (BOOL)isNSCFConstantString__;

@end
