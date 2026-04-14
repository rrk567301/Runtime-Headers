@class NSString;
@protocol SHNetworkRequester;

@interface SHCDNDataFetcher : NSObject <SHDataFetcher>

@property (readonly) id<SHNetworkRequester> networkRequester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
