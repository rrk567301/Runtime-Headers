@interface AAVersionUpdater : NSObject <AAVersionUpdaterProtocol_Internal, AAVersionUpdaterProtocol>

@property (nonatomic) unsigned long long currentVersion;

- (BOOL)needsUpdate;
- (id)initWithStartingVersion:(unsigned long long)a0;
- (void)performMigrations;
- (void)_performVersionUpdate:(unsigned long long)a0;
- (id)_latestVersion;

@end
