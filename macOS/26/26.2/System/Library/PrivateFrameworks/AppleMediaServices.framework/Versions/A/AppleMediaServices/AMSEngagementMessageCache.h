@interface AMSEngagementMessageCache : NSObject {
    void /* unknown type, empty encoding */ cacheInfo;
}

- (void).cxx_destruct;
- (id)init;
- (void)addWithCachePolicy:(long long)a0 placement:(id)a1 serviceType:(id)a2;
- (id)filterWithMessage:(id)a0;
- (BOOL)isBlockedWithMessageRequest:(id)a0 placement:(id)a1 serviceType:(id)a2;

@end
