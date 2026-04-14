@class NSString, NSArray;

@interface AXVMenuInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *menuTitle;
@property (copy, nonatomic) NSArray *menuItems;
@property (copy, nonatomic) NSArray *addedMenuItems;
@property (nonatomic) long long rowCountToShow;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToMenuInfo:(id)a0;

@end
