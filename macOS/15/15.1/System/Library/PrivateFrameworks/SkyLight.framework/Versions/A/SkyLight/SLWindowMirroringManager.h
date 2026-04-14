@class NSNumber, NSMutableDictionary;
@protocol SLWindowMirroringManagerDelegate;

@interface SLWindowMirroringManager : NSObject {
    NSMutableDictionary *_contexts;
    NSNumber *_shieldWindowID;
}

@property (class, readonly, nonatomic) SLWindowMirroringManager *shared;

@property (weak, nonatomic) id<SLWindowMirroringManagerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)extend:(id)a0;
- (BOOL)removeApp:(id)a0 from:(id)a1;
- (BOOL)addApp:(id)a0 to:(id)a1;
- (BOOL)addWindow:(id)a0 to:(id)a1;
- (id)appsMirroredToDisplay:(id)a0;
- (id)contextForDisplay:(id)a0;
- (id)filterForDisplay:(id)a0;
- (void)invokeShieldWindowRemovedDelegate;
- (BOOL)mirror:(id)a0 to:(id)a1;
- (BOOL)mirror:(id)a0 withIncludedApps:(id)a1 to:(id)a2;
- (BOOL)mirror:(id)a0 withIncludedWindows:(id)a1 to:(id)a2;
- (BOOL)removeWindow:(id)a0 from:(id)a1;
- (BOOL)replaceAllWindows:(id)a0 to:(id)a1;
- (BOOL)update:(id)a0 withShieldWindow:(id)a1 to:(id)a2;
- (id)windowMirroringDisplays;
- (id)windowsMirroredToDisplay:(id)a0;

@end
