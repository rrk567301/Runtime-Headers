@class NSString, NSMutableDictionary;

@interface NSPersistentUIBucket : NSObject <NSPersistentUITopLevelContainer> {
    NSMutableDictionary *_publicProperties;
    BOOL _contentsHaveInvalidState;
}

@property (readonly) NSMutableDictionary *state;
@property (copy) NSString *frameString;
@property (readonly) unsigned int windowID;
@property long long windowNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_contentsHaveInvalidRestorableState;
- (id)_copyPublicPersistentUIInfo;
- (void)_invalidateRestorableStateOfContents;
- (unsigned int)_persistentUIWindowID;
- (void)_setContentsHaveInvalidRestorableState:(BOOL)a0;
- (BOOL)_shouldRecordPersistentState;
- (void)encodeInvalidPersistentStateWithBackgroundQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithWindowID:(unsigned int)a0;
- (BOOL)isGlobal;
- (BOOL)isMenuBar;
- (void)setPublicProperty:(id)a0 forKey:(id)a1;

@end
