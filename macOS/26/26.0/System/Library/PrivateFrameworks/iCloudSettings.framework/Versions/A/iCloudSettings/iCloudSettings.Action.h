@class NSString, NSDictionary, _TtC14iCloudSettings18ActionConfirmation;

@interface iCloudSettings.Action : NSObject {
    void /* unknown type, empty encoding */ _rawJsonObject;
    void /* function */ type;
    void /* function */ title;
    void /* function */ urlString;
    void /* function */ actionParameters;
    void /* function */ buyParameters;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSDictionary *actionParameters;
@property (nonatomic, readonly) NSDictionary *buyParameters;
@property (nonatomic, readonly) _TtC14iCloudSettings18ActionConfirmation *actionConfirmation;
@property (nonatomic, readonly) BOOL isDefault;
@property (nonatomic, readonly) BOOL isDestructive;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isUpsellAction;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
