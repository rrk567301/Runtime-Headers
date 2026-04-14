@class NSString, NSArray;

@interface iCloudSettings.ManageStorageConfirmation : NSObject {
    void /* function */ title;
    void /* function */ subTitle;
    void /* function */ actions;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subTitle;
@property (nonatomic, readonly) NSArray *actions;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
