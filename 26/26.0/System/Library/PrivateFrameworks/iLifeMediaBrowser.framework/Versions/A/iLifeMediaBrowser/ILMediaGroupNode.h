@class NSString, NSImage, NSMutableArray, ILMediaGroup;

@interface ILMediaGroupNode : NSObject {
    ILMediaGroup *_mediaGroup;
    NSMutableArray *_filteredChildNodes;
    int _stateLock;
    id _filterDelegate;
    NSMutableArray *_filteredMediaObjects;
    BOOL _filteredMediaObjectsLoaded;
    NSString *_id;
    NSString *_name;
    NSImage *_icon;
    BOOL _observing;
    BOOL _isCreatingTree;
    unsigned long long _browserType;
}

+ (id)filteredMediaObjectsForGroup:(id)a0 browserView:(id)a1 browserType:(unsigned long long)a2;
+ (BOOL)shouldFilterOutMediaObject:(id)a0 browserView:(id)a1 browserType:(unsigned long long)a2;

- (void)stopObserving:(BOOL)a0;
- (void)dealloc;
- (id)path;
- (id)description;
- (id)name;
- (id)icon;
- (void)startObserving:(BOOL)a0;
- (id)ID;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)caseInsensitiveCompare:(id)a0;
- (id)mediaObjects;
- (BOOL)_shouldFilterOutForiMoviePlugin;
- (id)childGroupNodes;
- (BOOL)_shouldFilterOutForAperturePlugin:(id)a0 parentNode:(id)a1;
- (BOOL)_shouldFilterOutForFolderPlugin:(id)a0;
- (BOOL)_shouldFilterOutForPhotoBoothPlugin:(id)a0;
- (BOOL)_shouldFilterOutForPhotosPlugin:(id)a0 parentNode:(id)a1;
- (BOOL)_shouldFilterOutForiPhotoPlugin:(id)a0 parentNode:(id)a1;
- (BOOL)_shouldFilterOutForiTunesPlugin:(id)a0;
- (void)addChildGroupNode:(id)a0;
- (unsigned long long)browserType;
- (unsigned long long)childGroupNodesCount;
- (id)childMediaGroups;
- (id)initWithMediaGroup:(id)a0 parentNode:(id)a1 filterDelegate:(id)a2;
- (id)initWithName:(id)a0 icon:(id)a1 ID:(id)a2 mediaObjects:(id)a3;
- (BOOL)isCreatingTree;
- (id)representedMediaGroup;
- (void)setCreatingTree:(BOOL)a0;
- (BOOL)shouldHideCountTextField;

@end
