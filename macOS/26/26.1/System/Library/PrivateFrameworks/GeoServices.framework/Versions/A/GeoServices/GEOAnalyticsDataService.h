@protocol GEOAnalyticsDataServiceProxy;

@interface GEOAnalyticsDataService : NSObject <GEOAnalyticsDataServiceProxy> {
    id<GEOAnalyticsDataServiceProxy> _proxyObj;
}

+ (id)sharedService;
+ (void)useLocalProxy;

- (void).cxx_destruct;
- (id)initWithProxyClass:(Class)a0;
- (int)networkEventFileDescriptorForRepresentativeDate:(id)a0;

@end
