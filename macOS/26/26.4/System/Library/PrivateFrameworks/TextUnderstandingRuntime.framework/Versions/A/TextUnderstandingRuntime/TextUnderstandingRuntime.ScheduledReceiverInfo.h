@class NSString, NSDictionary;

@interface TextUnderstandingRuntime.ScheduledReceiverInfo : NSObject <SpotlightReceiverInfo> {
    void /* function */ domain;
    void /* function */ userInfo;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)init;

@end
