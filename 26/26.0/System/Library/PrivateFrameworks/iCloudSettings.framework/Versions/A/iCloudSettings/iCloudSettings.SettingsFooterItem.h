@class NSString, _TtC14iCloudSettings6Action;

@interface iCloudSettings.SettingsFooterItem : NSObject {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ identifier;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _TtC14iCloudSettings6Action *action;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 action:(id)a3;

@end
