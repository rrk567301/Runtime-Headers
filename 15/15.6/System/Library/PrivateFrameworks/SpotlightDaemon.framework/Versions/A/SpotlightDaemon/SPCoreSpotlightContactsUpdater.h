@interface SPCoreSpotlightContactsUpdater : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)updateWithCompletionHandler:(id /* block */)a0;
- (id)updatedCountsFromExisting:(id)a0 result:(long long *)a1 shouldUpdateMonth:(char)a2;

@end
