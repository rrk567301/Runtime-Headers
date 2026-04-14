@interface CCDonateXPCClient : CCXPCClient <CCDonateService>

- (id)initWithClientId:(id)a0;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 remoteDevice:(id)a1 encodedDescriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
- (oneway void)endSetDonationWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)mergeDelta:(id)a0 completion:(id /* block */)a1;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
