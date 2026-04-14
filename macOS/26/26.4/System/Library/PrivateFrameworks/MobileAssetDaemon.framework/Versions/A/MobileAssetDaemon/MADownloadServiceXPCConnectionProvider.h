@class NSString;

@interface MADownloadServiceXPCConnectionProvider : NSObject <MADownloadServiceXPCConnectionProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createConnectionWithServiceName:(id)a0;

@end
