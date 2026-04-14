@class NSString;

@interface PodcastsFoundation.AnalyticsUserIdentifier : NSObject {
    void /* function */ clientId;
    void /* function */ userId;
}

@property (nonatomic, readonly) NSString *clientId;
@property (nonatomic, readonly) NSString *userId;
@property (nonatomic, readonly) BOOL userAllowsPersonalization;
@property (nonatomic, readonly) BOOL userUnder13YearsOld;
@property (nonatomic, readonly) BOOL userIsManagedAccount;

- (void).cxx_destruct;
- (id)init;

@end
