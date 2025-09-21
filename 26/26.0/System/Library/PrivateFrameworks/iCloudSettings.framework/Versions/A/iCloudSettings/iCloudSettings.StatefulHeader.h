@class NSString, NSArray, NSDictionary;

@interface iCloudSettings.StatefulHeader : NSObject {
    void /* function */ layoutType;
    void /* function */ title;
    void /* function */ subTitle;
    void /* function */ actions;
    void /* function */ impressionUrlString;
    void /* function */ impressionPayload;
}

@property (nonatomic, readonly) NSString *layoutType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subTitle;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSString *impressionUrlString;
@property (nonatomic, readonly) NSDictionary *impressionPayload;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
