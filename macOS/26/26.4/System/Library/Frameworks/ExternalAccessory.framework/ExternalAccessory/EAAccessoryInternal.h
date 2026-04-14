@class NSLock, NSString, NSDictionary, NSData, NSArray, NSMutableArray, NSNumber;
@protocol EAAccessoryDelegate;

@interface EAAccessoryInternal : NSObject {
    NSLock *_locationLock;
    NSMutableArray *_sessionsList;
}

@property BOOL connected;
@property unsigned int connectionID;
@property (copy) NSString *manufacturer;
@property (copy) NSString *name;
@property (copy) NSString *modelNumber;
@property (copy) NSString *serialNumber;
@property (copy) NSString *firmwareRevisionActive;
@property (copy) NSString *firmwareRevisionPending;
@property (copy) NSString *hardwareRevision;
@property (copy) NSString *dockType;
@property long long transportType;
@property (copy) NSString *macAddress;
@property (copy) NSString *preferredApp;
@property (copy) NSData *certSerial;
@property (copy) NSData *certData;
@property (copy) NSString *ppid;
@property (copy) NSString *regionCode;
@property (copy) NSDictionary *protocolDetails;
@property (copy) NSString *coreAccessoryPrimaryUUID;
@property int classType;
@property (retain) NSDictionary *audioPorts;
@property unsigned int capabilities;
@property BOOL notPresentInIAPAccessoriesArray;
@property (readonly) NSArray *sessionsList;
@property (retain) NSArray *eqNames;
@property unsigned int eqIndex;
@property int locationSentenceTypesMask;
@property (retain) NSDictionary *vehicleInfoSupportedTypes;
@property (retain) NSDictionary *vehicleInfoInitialData;
@property (retain) NSArray *cameraComponents;
@property (retain) NSMutableArray *enqueuedNMEASentences;
@property (retain) NSMutableArray *enqueuedNMEATimestamps;
@property unsigned long long nmeaSentenceAddCounter;
@property unsigned long long nmeaSentenceGetCounter;
@property (retain) NSDictionary *protocols;
@property (retain) NSNumber *highestXPCDelay;
@property (retain) NSNumber *highestFrameworkDelay;
@property (retain) NSNumber *averageXPCDelay;
@property (retain) NSNumber *averageFrameworkDelay;
@property id<EAAccessoryDelegate> delegate;
@property (copy) NSString *bonjourName;
@property BOOL hasIPConnection;
@property BOOL isAvailableOverBonjour;
@property BOOL pointOfInterestHandoffEnabled;
@property BOOL createdByCoreAccessories;
@property (copy) id /* block */ pairingCompletionBlock;
@property (copy) id /* block */ WiFiCredentialsCompletionBlock;
@property unsigned long long destinationSharingOptions;

- (id)init;
- (void)removeSession:(id)a0;
- (void)addSession:(id)a0;
- (void)dealloc;

@end
