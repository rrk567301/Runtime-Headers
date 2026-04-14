@class NSString, NSMutableDictionary;

@interface NSPersistentUIBucket : NSObject {
    unsigned int windowID;
    unsigned int windowNumber;
    NSMutableDictionary *publicProperties;
    BOOL contentsHaveInvalidState;
}

@property (readonly) NSMutableDictionary *state;
@property (copy) NSString *frameString;

- (void)dealloc;
- (unsigned int)_persistentUIWindowID;
- (id)initWithWindowID:(unsigned int)a0;
- (BOOL)isGlobal;
- (BOOL)_contentsHaveInvalidRestorableState;
- (void)encodeInvalidPersistentStateWithBackgroundQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setContentsHaveInvalidRestorableState:(BOOL)a0;
- (BOOL)isMenuBar;
- (BOOL)_shouldRecordPersistentState;
- (void)_invalidateRestorableStateOfContents;
- (void)setPublicProperty:(id)a0 forKey:(id)a1;

@end
