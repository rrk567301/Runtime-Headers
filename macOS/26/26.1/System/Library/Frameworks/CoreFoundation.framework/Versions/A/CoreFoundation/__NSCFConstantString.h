@class NSString;

@interface __NSCFConstantString : __NSCFString <NSRedactedDescription>

@property (readonly, copy) NSString *redactedDescription;

- (id)copy;
- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)isNSCFConstantString__;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;

@end
