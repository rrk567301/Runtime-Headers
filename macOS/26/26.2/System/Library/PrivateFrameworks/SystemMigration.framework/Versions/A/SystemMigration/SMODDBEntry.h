@class ODRecord;

@interface SMODDBEntry : SMDBEntry

@property (retain) ODRecord *backingODRecord;

- (void).cxx_destruct;
- (id)name;
- (id)initWithODRecord:(id)a0;
- (id)initWithEntry:(id)a0;
- (BOOL)_createDictionaryFromRecord:(id)a0;
- (id)initWithDictionary:(id)a0 andName:(id)a1;

@end
