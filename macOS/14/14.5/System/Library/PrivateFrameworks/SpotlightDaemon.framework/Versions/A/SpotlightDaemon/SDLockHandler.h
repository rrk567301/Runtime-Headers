@protocol SDLockHandlerDelegate;

@interface SDLockHandler : NSObject {
    id<SDLockHandlerDelegate> _delegate;
    unsigned long long _options;
}

+ (void)setLockHandlerWithDelegate:(id)a0 options:(unsigned long long)a1;
+ (id)sharedLockHandler;

- (void).cxx_destruct;
- (void)start;
- (BOOL)unlocked;
- (BOOL)migrationComplete;
- (BOOL)unlockedSinceBoot;
- (id)initWithDelegate:(id)a0 options:(unsigned long long)a1;
- (void)checkMigrationComplete;
- (BOOL)firstUnlockedInSB;
- (void)forceMigrationComplete;

@end
