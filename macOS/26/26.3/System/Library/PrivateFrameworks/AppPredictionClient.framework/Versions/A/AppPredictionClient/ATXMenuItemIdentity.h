@class NSArray, ATXAppIdentity;

@interface ATXMenuItemIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXAppIdentity *appIdentity;
@property (readonly, nonatomic) NSArray *menuItemsPath;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAppIdentity:(id)a0 menuItemsPath:(id)a1;
- (BOOL)isEqualToATXMenuItemIdentity:(id)a0;

@end
