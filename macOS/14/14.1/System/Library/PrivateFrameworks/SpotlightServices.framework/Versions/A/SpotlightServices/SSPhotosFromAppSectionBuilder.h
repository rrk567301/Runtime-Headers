@class NSString;

@interface SSPhotosFromAppSectionBuilder : SSPhotosSectionBuilder

@property (retain, nonatomic) NSString *appBundleId;

+ (id)supportedBundleIds;

- (void).cxx_destruct;
- (void)setSection:(id)a0;
- (long long)maxCardSections;
- (id)buildButtonItem;
- (id)buildTitle;

@end
