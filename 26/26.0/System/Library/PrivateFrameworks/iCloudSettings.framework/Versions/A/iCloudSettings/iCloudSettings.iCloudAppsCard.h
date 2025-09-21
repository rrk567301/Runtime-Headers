@class NSString, NSArray;

@interface iCloudSettings.iCloudAppsCard : NSObject {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ detailLabel;
    void /* function */ statusColor;
    void /* function */ apps;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *statusColor;
@property (nonatomic, readonly) NSArray *apps;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
