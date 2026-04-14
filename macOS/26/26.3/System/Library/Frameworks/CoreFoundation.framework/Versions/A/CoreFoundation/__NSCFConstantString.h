@class NSString;

@interface __NSCFConstantString : __NSCFString <NSRedactedDescription>

@property (readonly, copy) NSString *redactedDescription;

- (id)copy;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNSCFConstantString__;
- (oneway void)release;

@end
