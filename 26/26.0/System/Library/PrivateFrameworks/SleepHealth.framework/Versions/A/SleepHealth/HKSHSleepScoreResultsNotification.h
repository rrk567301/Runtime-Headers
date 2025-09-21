@class NSString, NSDictionary;

@interface HKSHSleepScoreResultsNotification : NSObject {
    void /* function */ title;
    void /* function */ body;
    void /* function */ notificationUserInfo;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) BOOL isIntroduction;
@property (nonatomic, readonly) NSDictionary *notificationUserInfo;

- (id)init;
- (id)initWithUserInfo:(id)a0;
- (void).cxx_destruct;

@end
