@class NSString;

@interface CUIKInterface : NSObject

@property long long overrideLayoutDirection;
@property (retain) NSString *overridePreferredContentSizeCategory;

+ (id)shared;

- (void).cxx_destruct;
- (BOOL)isCurrentProcessAnApplicationExtension;
- (id)init;
- (BOOL)interfaceIsLeftToRight;
- (long long)layoutDirectionOrOverride;
- (id)preferredContentSizeCategoryOrOverride;
- (void)setLayoutDirectionOverride:(long long)a0;
- (void)setPreferredContentSizeCategoryOverride:(id)a0;
- (BOOL)usesLargeTextLayout;

@end
