@class NSString, NSArray, NSIndexSet;

@interface AXVMenuInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *menuTitle;
@property (copy, nonatomic) NSArray *menuItems;
@property (copy, nonatomic) NSArray *addedMenuItems;
@property (copy, nonatomic) NSIndexSet *addedMenuItemIndexes;
@property (nonatomic) long long rowCountToShow;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isEqualToMenuInfo:(id)a0;

@end
