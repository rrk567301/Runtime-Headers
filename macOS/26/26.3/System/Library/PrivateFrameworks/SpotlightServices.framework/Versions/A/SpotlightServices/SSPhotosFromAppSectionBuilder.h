@class NSString;

@interface SSPhotosFromAppSectionBuilder : SSPhotosSectionBuilder

@property (retain, nonatomic) NSString *appBundleId;

+ (id)supportedBundleIds;

- (void).cxx_destruct;
- (void)setSection:(id)a0;
- (id)buildSection;
- (id)buildButtonItem;
- (id)buildBridgedResult;
- (id)buildSearchInAppCommand;
- (id)buildTitle;

@end
