@protocol SDLockHandlerDelegate;

@interface SDLockHandler : NSObject {
    id<SDLockHandlerDelegate> _delegate;
    unsigned long long _options;
}

+ (void)setLockHandlerWithDelegate:(id)a0 options:(unsigned long long)a1;
+ (id)sharedLockHandler;

- (BOOL)unlockedSinceBoot;
- (void)start;
- (BOOL)unlocked;
- (BOOL)migrationComplete;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 options:(unsigned long long)a1;
- (void)checkMigrationComplete;
- (BOOL)cxUnlocked;
- (BOOL)firstUnlockedInSB;
- (void)forceMigrationComplete;

@end
