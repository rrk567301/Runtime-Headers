@interface CCDonateXPCClient : CCXPCClient <CCDonateService>

- (id)initWithClientId:(id)a0;
- (oneway void)endSetDonation:(id /* block */)a0;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 fromDevice:(id)a1 encodedDescriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
- (void)mergeDelta:(id)a0 withDeltaMetadata:(id)a1 completion:(id /* block */)a2;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
