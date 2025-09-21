@class NSMutableDictionary, NSArrayController, OSADictionary, OSADictionaryHistory;

@interface OSADictionaryControllerPrivate : NSObject {
    OSADictionary *_dictionary;
    NSMutableDictionary *_dataSource;
    NSArrayController *_definitionsController;
    OSADictionaryHistory *_dictionaryHistory;
    char _selectingObjects;
}

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (void)setDictionary:(id)a0;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)definitionsController;
- (id)dictionaryHistory;
- (char)selectingObjects;
- (void)setDefinitionsController:(id)a0;
- (void)setDictionaryHistory:(id)a0;
- (void)setSelectingObjects:(char)a0;

@end
