@class NSString, NSSet, BSSettings, FBSSceneSettings, NSDate, FBSSceneClientSettings;

@interface FBSceneSnapshotContext : NSObject <FBSceneSnapshotConfigurator, BSDescriptionProviding, FBSceneSnapshotInternalConfiguration, FBMutableSceneSnapshotConfiguration>

@property (readonly, copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) FBSSceneClientSettings *clientSettings;
@property (readonly, copy, nonatomic) BSSettings *clientExtendedData;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (copy, nonatomic) NSSet *layersToExclude;
@property (readonly, copy, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL clientAllowsProtectedContent;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithFBSContext:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)applyContext:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithFBSContext:(id)a0;
- (id)initWithScene:(id)a0 configurator:(id /* block */)a1;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;

@end
