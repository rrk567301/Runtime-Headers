@class NSData, NSString, MIBUNetworkInfo, NFReaderSession, MIBUNFCReaderSession, NSObject, MIBUDeviceStatus, NSNumber;
@protocol NFSession;

@interface MIBUDeviceNFC : MIBUDeviceBase {
    BOOL _productionMode;
    BOOL _securityMode;
    BOOL _uidMode;
    BOOL _sikaFuseExists;
    NSString *_serialNumber;
    NSString *_osVersion;
    NSString *_buildVersion;
    NSNumber *_ecid;
    NSNumber *_boardID;
    NSNumber *_chipID;
    NSNumber *_securityDomain;
    NSData *_apNonce;
    NSData *_sepNonce;
    NSNumber *_sikaFuse;
    NSNumber *_protocolVersion;
    long long _entitlement;
}

@property (retain, nonatomic) NSObject<NFSession> *nfSession;
@property (retain, nonatomic) NFReaderSession *readerSession;
@property (retain, nonatomic) MIBUNFCReaderSession *mibureaderSession;
@property (retain, nonatomic) MIBUDeviceStatus *status;
@property (retain, nonatomic) MIBUNetworkInfo *networkInfo;

- (id)buildVersion;
- (long long)entitlement;
- (id)ecid;
- (id)osVersion;
- (id)protocolVersion;
- (void)setSerialNumber:(id)a0;
- (id)chipID;
- (void)setEntitlement:(long long)a0;
- (id)serialNumber;
- (void).cxx_destruct;
- (id)init;
- (BOOL)endSession;
- (BOOL)securityMode;
- (void)setSecurityMode:(BOOL)a0;
- (void)getDeviceInfo:(id *)a0;
- (BOOL)startSession;
- (id)boardID;
- (BOOL)productionMode;
- (id)securityDomain;
- (void)setBoardID:(id)a0;
- (void)setChipID:(id)a0;
- (void)setProductionMode:(BOOL)a0;
- (void)setSecurityDomain:(id)a0;
- (BOOL)shutdown:(id *)a0;
- (void)setEcid:(id)a0;
- (void)setSikaFuse:(id)a0;
- (id)sikaFuse;
- (id)apNonce;
- (BOOL)uidMode;
- (BOOL)_startDiagWithEntitlement:(unsigned long long)a0 error:(id *)a1;
- (void)configureNFC:(id)a0 error:(id *)a1;
- (id)sepNonce;
- (void)setApNonce:(id)a0;
- (void)setSepNonce:(id)a0;
- (void)setSikaFuseExists:(BOOL)a0;
- (void)setUidMode:(BOOL)a0;
- (BOOL)sikaFuseExists;
- (BOOL)startDiag:(id *)a0;
- (BOOL)startDiagnostics:(id *)a0;
- (void)updateDeviceStatus:(id *)a0;

@end
