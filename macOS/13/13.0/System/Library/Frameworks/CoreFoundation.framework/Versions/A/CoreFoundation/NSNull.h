@interface NSNull : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)scriptingMissingValueWithDescriptor:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)null;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (unsigned long long)_scriptingCount;
- (unsigned long long)_scriptingCountOfValueForKey:(id)a0;
- (void)_scriptingRemoveValueForSpecifier:(id)a0;
- (id)_scriptingNullDescriptor;
- (BOOL)_scriptingMightHandleCommand:(id)a0;
- (BOOL)_scriptingCanHandleCommand:(id)a0;
- (id)_scriptingSetValue:(id)a0 forSpecifier:(id)a1;
- (BOOL)_scriptingExists;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_cfTypeID;

@end
