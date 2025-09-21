@class FCPersistentDictionary;

@interface FCAccountActionQueue : NSObject

@property (retain, nonatomic) FCPersistentDictionary *persistentDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (char)enqueueActionWithType:(long long)a0;
- (id)peekAtActionTypes;
- (char)popActionTypesUpToCount:(unsigned long long)a0 setLocalDataHintIfNeeded:(char)a1;
- (char)readLocalDataHint;

@end
