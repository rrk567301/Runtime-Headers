@class NSString;

@interface SPUISPhotosFromAppSectionBuilder : SPUISPhotosSectionBuilder

@property (retain, nonatomic) NSString *appBundleId;

+ (id)supportedBundleIds;

- (void)setSection:(id)a0;
- (void).cxx_destruct;
- (id)buildSection;
- (id)buildButtonItem;
- (id)buildBridgedResult;
- (id)buildSearchInAppCommand;
- (id)buildTitle;

@end
