@class NSUUID;

@interface HMDRemoteEventRouterPrimaryResidentClient : HMDRemoteEventRouterClient {
    NSUUID *_primaryResidentIdentifier;
}

- (void).cxx_destruct;
- (id)dumpStateDescription;
- (void)handleUpdatedPrimaryResidentNotification:(id)a0;
- (BOOL)_clientIsEnabled:(id)a0;
- (BOOL)clientIsEnabled:(id)a0;

@end
