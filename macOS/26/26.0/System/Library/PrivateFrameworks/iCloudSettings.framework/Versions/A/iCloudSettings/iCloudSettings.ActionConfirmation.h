@class NSString, NSArray;

@interface iCloudSettings.ActionConfirmation : NSObject {
    void /* function */ title;
    void /* function */ message;
    void /* function */ actions;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSArray *actions;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
