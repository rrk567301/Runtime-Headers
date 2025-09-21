@class NSString, NSArray, NSIndexSet;

@interface AXVMenuInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *menuTitle;
@property (copy, nonatomic) NSArray *menuItems;
@property (copy, nonatomic) NSArray *addedMenuItems;
@property (copy, nonatomic) NSIndexSet *addedMenuItemIndexes;
@property (nonatomic) long long rowCountToShow;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isEqualToMenuInfo:(id)a0;

@end
