@class NSMutableDictionary, NSArrayController, OSADictionary, OSADictionaryHistory;

@interface OSADictionaryControllerPrivate : NSObject {
    OSADictionary *_dictionary;
    NSMutableDictionary *_dataSource;
    NSArrayController *_definitionsController;
    OSADictionaryHistory *_dictionaryHistory;
    BOOL _selectingObjects;
}

- (void)dealloc;
- (id)init;
- (void)setDictionary:(id)a0;
- (id)dictionary;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)definitionsController;
- (void)setDefinitionsController:(id)a0;
- (void)setDictionaryHistory:(id)a0;
- (id)dictionaryHistory;
- (BOOL)selectingObjects;
- (void)setSelectingObjects:(BOOL)a0;

@end
