@class NSString, NSDictionary;

@interface iCloudSettings.Action : NSObject {
    void /* unknown type, empty encoding */ _rawJsonObject;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ urlString;
    void /* unknown type, empty encoding */ actionParameters;
    void /* unknown type, empty encoding */ buyParameters;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSDictionary *actionParameters;
@property (nonatomic, readonly) NSDictionary *buyParameters;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isUpsellAction;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;
- (void)performWith:(id)a0 dynamicUIPresenter:(id)a1;
- (id)initWithType:(id)a0 title:(id)a1 urlString:(id)a2 actionParameters:(id)a3 buyParameters:(id)a4;

@end
