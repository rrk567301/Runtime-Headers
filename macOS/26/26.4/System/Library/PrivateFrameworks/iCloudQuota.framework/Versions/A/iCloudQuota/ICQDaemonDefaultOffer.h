@interface ICQDaemonDefaultOffer : ICQDaemonOffer

+ (id)persistenceKey;
+ (id)_mutablePlaceholderPersistanceDictionary;
+ (void)clearPersistedObject;

- (BOOL)isDefaultOffer;

@end
