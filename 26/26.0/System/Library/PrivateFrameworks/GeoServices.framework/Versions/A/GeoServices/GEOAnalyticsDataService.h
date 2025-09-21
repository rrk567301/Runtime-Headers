@protocol GEOAnalyticsDataServiceProxy;

@interface GEOAnalyticsDataService : NSObject <GEOAnalyticsDataServiceProxy> {
    id<GEOAnalyticsDataServiceProxy> _proxyObj;
}

+ (void)useLocalProxy;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)initWithProxyClass:(Class)a0;
- (int)networkEventFileDescriptorForRepresentativeDate:(id)a0;

@end
