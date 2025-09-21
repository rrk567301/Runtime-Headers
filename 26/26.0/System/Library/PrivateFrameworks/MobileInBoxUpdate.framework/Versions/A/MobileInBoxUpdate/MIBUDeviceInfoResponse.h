@class NSString, NSNumber, NSData;

@interface MIBUDeviceInfoResponse : MIBUNFCResponse

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

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)_deserialize:(id)a0;

@end
