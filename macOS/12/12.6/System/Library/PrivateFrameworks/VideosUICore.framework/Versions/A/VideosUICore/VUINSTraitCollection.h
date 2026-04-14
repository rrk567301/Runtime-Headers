@interface VUINSTraitCollection : NSObject

@property (readonly, nonatomic) unsigned long long vuiUserInterfaceStyle;
@property (readonly, nonatomic) unsigned long long vuiPreferredContentSizeCategory;
@property (nonatomic) unsigned long long userInterfaceStyle;
@property (nonatomic) unsigned long long preferredContentSizeCategory;

+ (id)current;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isAXEnabled;
- (BOOL)isAXLargeEnabled;
- (BOOL)isAXSmallEnabled;
- (id)initWithUserInterfaceStyle:(unsigned long long)a0;

@end
