@interface VUINSTraitCollection : NSObject

@property (readonly, nonatomic) unsigned long long vuiUserInterfaceStyle;
@property (readonly, nonatomic) unsigned long long vuiPreferredContentSizeCategory;
@property (nonatomic) double displayScale;
@property (nonatomic) unsigned long long userInterfaceStyle;
@property (nonatomic) unsigned long long preferredContentSizeCategory;

+ (id)current;

- (id)init;
- (char)isEqual:(id)a0;
- (char)isAXEnabled;
- (char)isAXLargeEnabled;
- (char)isAXSmallEnabled;
- (id)changedTraitsFrom:(id)a0;
- (id)initWithUserInterfaceStyle:(unsigned long long)a0;

@end
