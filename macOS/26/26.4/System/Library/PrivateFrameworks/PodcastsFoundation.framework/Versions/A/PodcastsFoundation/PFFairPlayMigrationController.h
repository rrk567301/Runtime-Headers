@interface PFFairPlayMigrationController : NSObject {
    void /* unknown type, empty encoding */ secureKeyRequestStorage;
    void /* unknown type, empty encoding */ invalidationManager;
    void /* unknown type, empty encoding */ fairPlayEpisodeDataFetcher;
    void /* unknown type, empty encoding */ secureKeyLoader;
    void /* unknown type, empty encoding */ internalQueue;
}

@property (class, nonatomic, readonly) PFFairPlayMigrationController *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)migrateIfNecessaryWithCompletion:(id /* block */)a0;

@end
