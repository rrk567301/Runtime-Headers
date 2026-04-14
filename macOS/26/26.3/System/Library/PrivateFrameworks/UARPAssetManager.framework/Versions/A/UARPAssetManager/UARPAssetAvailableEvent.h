@class NSArray, UARPAssetVersionBase, NSDate, UARPEndpointPersonality;

@interface UARPAssetAvailableEvent : NSObject

@property (readonly) long long status;
@property (readonly) UARPEndpointPersonality *personality;
@property (readonly) NSArray *serialNumbers;
@property (readonly) UARPAssetVersionBase *assetVersion;
@property (readonly) NSDate *creationDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (BOOL)includesPersonality:(id)a0;

@end
