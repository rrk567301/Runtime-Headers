@class NSString, ATXMenuItemIdentity;

@interface ATXMenuItemInvocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXMenuItemIdentity *identity;
@property (readonly, nonatomic) unsigned long long invocationType;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) NSString *localizedKeyboardShortcutDisplayName;
@property (readonly, nonatomic) NSString *localizedKeyboardShorctcutDisplayName;

+ (id)stringForMenuItemInvocationType:(unsigned long long)a0;
+ (id)stringForMenuItemSourceType:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0 invocationType:(unsigned long long)a1 sourceType:(unsigned long long)a2 localizedKeyboardShorctcutDisplayName:(id)a3;
- (BOOL)isEqualToATXMenuItemInvocation:(id)a0;
- (id)initWithIdentity:(id)a0 invocationType:(unsigned long long)a1 sourceType:(unsigned long long)a2 localizedKeyboardShortcutDisplayName:(id)a3;

@end
