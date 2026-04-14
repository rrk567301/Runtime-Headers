@class NSArray, ATXAppIdentity;

@interface ATXMenuItemIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXAppIdentity *appIdentity;
@property (readonly, nonatomic) NSArray *menuItemsPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAppIdentity:(id)a0 menuItemsPath:(id)a1;
- (BOOL)isEqualToATXMenuItemIdentity:(id)a0;

@end
