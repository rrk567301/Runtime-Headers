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
- (id)_copyPublicPersistentUIInfo;
- (BOOL)isGlobal;
- (id)initWithWindowID:(unsigned int)a0;
- (unsigned int)_persistentUIWindowID;
- (BOOL)_contentsHaveInvalidRestorableState;
- (void)_setContentsHaveInvalidRestorableState:(BOOL)a0;
- (void)_invalidateRestorableStateOfContents;
- (BOOL)_shouldRecordPersistentState;
- (void)encodeInvalidPersistentStateWithBackgroundQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPublicProperty:(id)a0 forKey:(id)a1;
- (BOOL)isMenuBar;

@end
