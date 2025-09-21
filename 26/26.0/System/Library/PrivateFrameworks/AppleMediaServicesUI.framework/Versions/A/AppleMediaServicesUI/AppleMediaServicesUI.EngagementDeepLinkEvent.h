@class NSDictionary;

@interface AppleMediaServicesUI.EngagementDeepLinkEvent : NSObject <AMSEngagementEvent> {
    void /* function */ engagementData;
}

@property (nonatomic, readonly) NSDictionary *engagementData;

- (id)init;
- (void).cxx_destruct;

@end
