@interface CCDonateXPCClient : CCXPCClient <CCDonateService>

- (id)initWithClientId:(id)a0;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 sourceVersion:(unsigned long long)a2 sourceValidity:(id)a3 options:(unsigned short)a4 completion:(id /* block */)a5;
- (oneway void)endSetDonationWithOptions:(unsigned short)a0 revisionToken:(id)a1 completion:(id /* block */)a2;
- (void)remoteUpdateFromDeviceUUID:(id)a0 options:(unsigned short)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4 completion:(id /* block */)a5;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
