@protocol SDLockHandlerDelegate;

@interface SDLockHandler : NSObject {
    id<SDLockHandlerDelegate> _delegate;
    unsigned long long _options;
}

+ (void)setLockHandlerWithDelegate:(id)a0 options:(unsigned long long)a1;
+ (id)sharedLockHandler;

- (void).cxx_destruct;
- (void)start;
- (char)migrationComplete;
- (char)unlockedSinceBoot;
- (char)unlocked;
- (id)initWithDelegate:(id)a0 options:(unsigned long long)a1;
- (void)checkMigrationComplete;
- (char)cxUnlocked;
- (char)firstUnlockedInSB;
- (void)forceMigrationComplete;

@end
