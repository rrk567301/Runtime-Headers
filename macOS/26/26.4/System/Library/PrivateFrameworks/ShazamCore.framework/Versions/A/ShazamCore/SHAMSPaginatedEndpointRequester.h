@class SHAMSEndpointRequester, NSString;

@interface SHAMSPaginatedEndpointRequester : NSObject <SHNetworkPaginatedRequester>

@property (retain) SHAMSEndpointRequester *endpointRequester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
