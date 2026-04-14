@class NSArray, UARPAssetVersionBase, NSDate, UARPEndpointPersonality;

@interface UARPAssetAvailableEvent : NSObject

@property (readonly) long long status;
@property (readonly) UARPEndpointPersonality *personality;
@property (readonly) NSArray *serialNumbers;
@property (readonly) UARPAssetVersionBase *assetVersion;
@property (readonly) NSDate *creationDate;

- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)includesPersonality:(id)a0;

@end
