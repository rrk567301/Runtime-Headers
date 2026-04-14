@protocol SDLockHandlerDelegate;

@interface SDLockHandler : NSObject {
    id<SDLockHandlerDelegate> _delegate;
    unsigned long long _options;
}

+ (id)sharedLockHandler;
+ (void)setLockHandlerWithDelegate:(id)a0 options:(unsigned long long)a1;

- (BOOL)unlockedSinceBoot;
- (void).cxx_destruct;
- (BOOL)unlocked;
- (void)start;
- (BOOL)migrationComplete;
- (id)initWithDelegate:(id)a0 options:(unsigned long long)a1;
- (void)checkMigrationComplete;
- (BOOL)cxUnlocked;
- (BOOL)firstUnlockedInSB;
- (void)forceMigrationComplete;

@end
