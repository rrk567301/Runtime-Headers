@interface CCDonationXPCClient : CCXPCClient <CCDonationService>

+ (id)errorDomain;
+ (long long)interruptionErrorCode;
+ (long long)invalidationErrorCode;

- (id)initWithClientId:(id)a0;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 cacheContents:(id)a2 reply:(id /* block */)a3;
- (void)beginSetDonationWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 sourceVersion:(id)a2 sourceValidity:(id)a3 options:(unsigned short)a4 reply:(id /* block */)a5;
- (void)cancelSetDonation:(id /* block */)a0;
- (void)endSetDonationWithOptions:(unsigned short)a0 revisionToken:(id)a1 reply:(id /* block */)a2;
- (void)remoteUpdateFromDeviceUUID:(id)a0 options:(unsigned short)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4 reply:(id /* block */)a5;
- (void)removeItemsMatchingPredicate:(id)a0 reply:(id /* block */)a1;
- (void)removeSourceItemIdentifier:(id)a0 reply:(id /* block */)a1;

@end
