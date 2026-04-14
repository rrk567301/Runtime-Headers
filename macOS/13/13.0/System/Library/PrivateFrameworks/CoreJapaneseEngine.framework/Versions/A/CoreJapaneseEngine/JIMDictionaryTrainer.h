@class NSMutableDictionary, NSTimer, NSOperationQueue, NSArray, NSOperation, NSMutableArray;

@interface JIMDictionaryTrainer : NSObject

@property (retain) NSTimer *timer;
@property id /* block */ mecabraGetter;
@property (retain) NSOperationQueue *mecabraQueue;
@property (retain) NSOperationQueue *asyncTaskQueue;
@property (weak) NSOperation *trainingOperation;
@property (retain) NSMutableDictionary *unknownWords;
@property (retain) NSMutableArray *foundUnknownWords;
@property (retain) NSArray *myMailAddresses;
@property void *unknownUsedWordDict;
@property void *unknownUnusedWordDict;
@property BOOL needUpdateTimestamp;
@property BOOL lastOperationUnFinished;
@property double currentInterval;
@property double longInterval;
@property double shortInterval;
@property double lastResumeTime;

+ (void)scheduleDictionaryTrainingWithMecabraGetter:(id /* block */)a0 inQueue:(id)a1;
+ (void)resetTraining;
+ (void)updateConfirmedWord:(void *)a0;
+ (id)_sharedDictionaryTrainerWithCreation:(BOOL)a0;
+ (id)_hiraganaStringForValidKatanaka:(id)a0;

- (void).cxx_destruct;
- (void)_updateTrainerDictionaryWithArray:(id)a0;
- (void)_saveUnknownWordsData;
- (void)_setMecabraDictionaryFromWordData:(id)a0;

@end
