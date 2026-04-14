@interface EMSenderRepository : EMRepository

+ (id)remoteInterface;

- (id)performQuery:(id)a0 withObserver:(id)a1;
- (void)refreshQueryWithObserver:(id)a0;
- (id)simpleAddressesForRelevantSenders:(id *)a0;

@end
