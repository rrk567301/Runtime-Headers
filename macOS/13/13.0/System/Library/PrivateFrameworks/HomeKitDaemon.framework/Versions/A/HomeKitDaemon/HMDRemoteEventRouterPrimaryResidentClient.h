@class NSUUID;

@interface HMDRemoteEventRouterPrimaryResidentClient : HMDRemoteEventRouterClient {
    NSUUID *_primaryResidentIdentifier;
}

- (void).cxx_destruct;
- (id)dumpStateDescription;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)a0;
- (unsigned long long)messageTransportRestriction;
- (BOOL)clientIsEnabled:(id)a0;
- (BOOL)_clientIsEnabled:(id)a0;

@end
