@class NSString, ILChangeManager, NSObject;
@protocol ILMediaObjectsProvider, NSLocking;

@interface ILAuxiliaryContext : NSObject {
    NSString *_pluginIdentifier;
    ILChangeManager *_changeManager;
    NSObject<ILMediaObjectsProvider> *_mediaObjectsProvider;
    int _loadState;
    NSObject<NSLocking> *_stateLock;
}

- (void)dealloc;
- (id)pluginIdentifier;
- (id)stateLock;
- (void)setPluginIdentifier:(id)a0;
- (int)loadState;
- (id)changeManager;
- (id)mediaObjectsProvider;
- (void)setMediaObjectsProvider:(id)a0;
- (void)setLoadState:(int)a0;
- (id)initWithPluginIdentifier:(id)a0 mediaObjectsProvider:(id)a1 stateLock:(id)a2;
- (void)setChangeManager:(id)a0;

@end
