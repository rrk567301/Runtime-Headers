@class ODRecord;

@interface SMODDBEntry : SMDBEntry

@property (retain) ODRecord *backingODRecord;

- (id)name;
- (void).cxx_destruct;
- (id)initWithEntry:(id)a0;
- (id)initWithODRecord:(id)a0;
- (id)initWithDictionary:(id)a0 andName:(id)a1;
- (BOOL)_createDictionaryFromRecord:(id)a0;

@end
