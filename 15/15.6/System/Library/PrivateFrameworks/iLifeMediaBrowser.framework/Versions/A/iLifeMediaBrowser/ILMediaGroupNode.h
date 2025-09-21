@class NSString, NSImage, NSMutableArray, ILMediaGroup;

@interface ILMediaGroupNode : NSObject {
    ILMediaGroup *_mediaGroup;
    NSMutableArray *_filteredChildNodes;
    int _stateLock;
    id _filterDelegate;
    NSMutableArray *_filteredMediaObjects;
    char _filteredMediaObjectsLoaded;
    NSString *_id;
    NSString *_name;
    NSImage *_icon;
    char _observing;
    char _isCreatingTree;
    unsigned long long _browserType;
}

+ (id)filteredMediaObjectsForGroup:(id)a0 browserView:(id)a1 browserType:(unsigned long long)a2;
+ (char)shouldFilterOutMediaObject:(id)a0 browserView:(id)a1 browserType:(unsigned long long)a2;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)path;
- (long long)caseInsensitiveCompare:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)browserType;
- (id)icon;
- (void)startObserving:(char)a0;
- (void)stopObserving:(char)a0;
- (id)ID;
- (id)mediaObjects;
- (char)_shouldFilterOutForiMoviePlugin;
- (id)childGroupNodes;
- (char)_shouldFilterOutForAperturePlugin:(id)a0 parentNode:(id)a1;
- (char)_shouldFilterOutForFolderPlugin:(id)a0;
- (char)_shouldFilterOutForPhotoBoothPlugin:(id)a0;
- (char)_shouldFilterOutForPhotosPlugin:(id)a0 parentNode:(id)a1;
- (char)_shouldFilterOutForiPhotoPlugin:(id)a0 parentNode:(id)a1;
- (char)_shouldFilterOutForiTunesPlugin:(id)a0;
- (void)addChildGroupNode:(id)a0;
- (unsigned long long)childGroupNodesCount;
- (id)childMediaGroups;
- (id)initWithMediaGroup:(id)a0 parentNode:(id)a1 filterDelegate:(id)a2;
- (id)initWithName:(id)a0 icon:(id)a1 ID:(id)a2 mediaObjects:(id)a3;
- (char)isCreatingTree;
- (id)representedMediaGroup;
- (void)setCreatingTree:(char)a0;
- (char)shouldHideCountTextField;

@end
