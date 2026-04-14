@class NSMutableDictionary, NSArrayController, OSADictionary, OSADictionaryHistory;

@interface OSADictionaryControllerPrivate : NSObject {
    OSADictionary *_dictionary;
    NSMutableDictionary *_dataSource;
    NSArrayController *_definitionsController;
    OSADictionaryHistory *_dictionaryHistory;
    BOOL _selectingObjects;
}

- (id)dictionary;
- (id)dataSource;
- (void)dealloc;
- (void)setDataSource:(id)a0;
- (void)setDictionary:(id)a0;
- (id)init;
- (id)definitionsController;
- (id)dictionaryHistory;
- (BOOL)selectingObjects;
- (void)setDefinitionsController:(id)a0;
- (void)setDictionaryHistory:(id)a0;
- (void)setSelectingObjects:(BOOL)a0;

@end
