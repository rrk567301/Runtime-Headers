@class NSMutableDictionary;
@protocol SLWindowMirroringManagerDelegate;

@interface SLWindowMirroringManager : NSObject {
    NSMutableDictionary *_contexts;
    int tokenShieldWindowChanged;
}

@property (class, readonly, nonatomic) SLWindowMirroringManager *shared;

@property (weak, nonatomic) id<SLWindowMirroringManagerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)extend:(id)a0;
- (char)removeApp:(id)a0 from:(id)a1;
- (char)addApp:(id)a0 to:(id)a1;
- (char)addWindow:(id)a0 to:(id)a1;
- (id)appsMirroredToDisplay:(id)a0;
- (id)contextForDisplay:(id)a0;
- (id)filterForDisplay:(id)a0;
- (void)invokeDelegateContentChanged:(id)a0;
- (char)mirror:(id)a0 to:(id)a1;
- (char)mirror:(id)a0 withIncludedApps:(id)a1 to:(id)a2;
- (char)mirror:(id)a0 withIncludedWindows:(id)a1 andIncludedApps:(id)a2 to:(id)a3;
- (char)mirror:(id)a0 withIncludedWindows:(id)a1 to:(id)a2;
- (char)removeAllContentsFrom:(id)a0;
- (char)removeWindow:(id)a0 from:(id)a1;
- (char)replaceAllContentsWithApp:(id)a0 to:(id)a1;
- (char)replaceAllContentsWithWindow:(id)a0 to:(id)a1;
- (char)replaceAllWindows:(id)a0 to:(id)a1;
- (char)replaceWindow:(id)a0 with:(id)a1 to:(id)a2;
- (void)resetSession:(id)a0;
- (id)shieldWindowForDisplay:(id)a0;
- (char)supportWindowMirroring;
- (char)update:(id)a0 withShieldWindow:(id)a1 to:(id)a2;
- (id)windowMirroringDisplays;
- (id)windowsMirroredToDisplay:(id)a0;

@end
