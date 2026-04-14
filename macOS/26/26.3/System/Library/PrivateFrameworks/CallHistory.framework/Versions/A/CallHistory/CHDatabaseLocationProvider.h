@class NSString;

@interface CHDatabaseLocationProvider : NSObject <CHDatabaseLocationProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)permanentDatabaseLocationWithError:(unsigned char *)a0;
- (id)temporaryDatabaseLocationWithError:(unsigned char *)a0;

@end
