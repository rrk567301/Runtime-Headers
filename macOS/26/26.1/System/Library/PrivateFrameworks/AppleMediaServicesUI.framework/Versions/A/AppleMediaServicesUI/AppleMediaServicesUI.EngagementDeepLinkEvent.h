@class NSDictionary;

@interface AppleMediaServicesUI.EngagementDeepLinkEvent : NSObject <AMSEngagementEvent> {
    void /* function */ engagementData;
}

@property (nonatomic, readonly) NSDictionary *engagementData;

- (void).cxx_destruct;
- (id)init;

@end
