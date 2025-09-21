@class NSString, _TtC14iCloudSettings6Action, _TtC14iCloudSettings5Icons;

@interface iCloudSettings.Feature : NSObject {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ featureId;
    void /* function */ iTunesItemId;
    void /* function */ bundleIdentifier;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *featureId;
@property (nonatomic, readonly) _TtC14iCloudSettings6Action *action;
@property (nonatomic, readonly) NSString *iTunesItemId;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) _TtC14iCloudSettings5Icons *icons;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeatureId:(id)a0 title:(id)a1 subtitle:(id)a2 icons:(id)a3 action:(id)a4 iTunesItemId:(id)a5 bundleIdentifier:(id)a6;

@end
