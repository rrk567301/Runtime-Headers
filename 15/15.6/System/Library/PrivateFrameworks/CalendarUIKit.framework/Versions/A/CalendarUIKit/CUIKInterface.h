@class NSString;

@interface CUIKInterface : NSObject

@property long long overrideLayoutDirection;
@property (retain) NSString *overridePreferredContentSizeCategory;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (char)isCurrentProcessAnApplicationExtension;
- (char)interfaceIsLeftToRight;
- (long long)layoutDirectionOrOverride;
- (id)preferredContentSizeCategoryOrOverride;
- (void)setLayoutDirectionOverride:(long long)a0;
- (void)setPreferredContentSizeCategoryOverride:(id)a0;
- (char)usesLargeTextLayout;

@end
