@class NSString, NSDictionary, _TtC14iCloudSettings25ManageStorageConfirmation, _TtC14iCloudSettings6Action;

@interface iCloudSettings.ManageStorageAction : NSObject {
    void /* function */ title;
    void /* function */ actionString;
    void /* function */ actionURL;
    void /* function */ actionParameters;
    void /* function */ buyParameters;
}

@property (nonatomic, readonly) BOOL isDefault;
@property (nonatomic, readonly) BOOL isDestructive;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) long long actionType;
@property (nonatomic, readonly) NSString *actionString;
@property (nonatomic, copy) NSString *actionURL;
@property (nonatomic, readonly) NSDictionary *actionParameters;
@property (nonatomic, readonly) NSDictionary *buyParameters;
@property (nonatomic, readonly) _TtC14iCloudSettings25ManageStorageConfirmation *confirmation;
@property (nonatomic, readonly) _TtC14iCloudSettings6Action *homeAction;
@property (nonatomic, readonly) BOOL isUpsellAction;
@property (nonatomic, readonly) BOOL isFamilyAction;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
