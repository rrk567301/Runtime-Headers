@class NSString, NSNumber, NSData;

@interface MIBUDeviceBase : NSObject

@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSNumber *ecid;
@property (retain, nonatomic) NSNumber *boardID;
@property (retain, nonatomic) NSNumber *chipID;
@property (nonatomic) NSNumber *securityDomain;
@property (retain, nonatomic) NSData *apNonce;
@property (retain, nonatomic) NSData *sepNonce;
@property (nonatomic) BOOL productionMode;
@property (nonatomic) BOOL securityMode;
@property (nonatomic) BOOL uidMode;
@property (retain, nonatomic) NSNumber *sikaFuse;
@property (nonatomic) BOOL sikaFuseExists;
@property (nonatomic) long long entitlement;
@property (nonatomic) BOOL suppressLogging;
@property (readonly, nonatomic) NSNumber *protocolVersion;
@property (readonly, nonatomic) BOOL protocolSupported;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;

- (void).cxx_destruct;

@end
