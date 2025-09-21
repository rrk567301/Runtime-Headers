@class NSString, NSMutableDictionary;

@interface NSPersistentUIBucket : NSObject <NSPersistentUITopLevelContainer> {
    NSMutableDictionary *_publicProperties;
    char _contentsHaveInvalidState;
}

@property (readonly) NSMutableDictionary *state;
@property (copy) NSString *frameString;
@property (readonly) unsigned int windowID;
@property long long windowNumber;
@property (setter=_setContentsHaveInvalidRestorableState:) char _contentsHaveInvalidRestorableState;
@property (readonly) char _shouldRecordPersistentState;
@property (readonly) unsigned int _persistentUIWindowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_copyPublicPersistentUIInfo;
- (void)_invalidateRestorableStateOfContents;
- (void)encodeInvalidPersistentStateWithBackgroundQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithWindowID:(unsigned int)a0;
- (char)isGlobal;
- (char)isMenuBar;
- (void)setPublicProperty:(id)a0 forKey:(id)a1;

@end
