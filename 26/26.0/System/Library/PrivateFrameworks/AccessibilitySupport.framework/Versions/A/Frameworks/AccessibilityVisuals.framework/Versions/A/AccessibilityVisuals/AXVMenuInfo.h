@class NSString, NSArray, NSIndexSet;

@interface AXVMenuInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *menuTitle;
@property (copy, nonatomic) NSArray *menuItems;
@property (copy, nonatomic) NSArray *addedMenuItems;
@property (copy, nonatomic) NSIndexSet *addedMenuItemIndexes;
@property (nonatomic) long long rowCountToShow;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToMenuInfo:(id)a0;

@end
