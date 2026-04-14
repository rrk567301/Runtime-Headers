@protocol SDLockHandlerDelegate;

@interface SDLockHandler : NSObject {
    id<SDLockHandlerDelegate> _delegate;
    unsigned long long _options;
}

+ (id)sharedLockHandler;
+ (void)setLockHandlerWithDelegate:(id)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)start;
- (BOOL)unlocked;
- (BOOL)migrationComplete;
- (BOOL)unlockedSinceBoot;
- (id)initWithDelegate:(id)a0 options:(unsigned long long)a1;
- (void)checkMigrationComplete;
- (BOOL)cxUnlocked;
- (BOOL)firstUnlockedInSB;
- (void)forceMigrationComplete;

@end
