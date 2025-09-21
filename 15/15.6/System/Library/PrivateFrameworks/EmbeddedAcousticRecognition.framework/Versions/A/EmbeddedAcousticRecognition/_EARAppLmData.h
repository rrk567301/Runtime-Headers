@class NSArray;

@interface _EARAppLmData : _EARLmData {
    char roundingEnabled;
    long long inputType;
}

@property (readonly, nonatomic) struct shared_ptr<quasar::AppLmData> { struct AppLmData *__ptr_; struct __shared_weak_count *__cntrl_; } data;
@property (readonly, nonatomic) NSArray *orderedOovs;

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)metrics;
- (char)roundingEnabled;
- (void)setInputFormat:(long long)a0;
- (void)addLineWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addNgramCountWithType:(unsigned long long)a0 content:(id)a1;
- (id)addOovTokensFromSentence:(id)a0;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2 hasWeights:(char)a3;
- (long long)canAddAsrProns:(id)a0 forWord:(id)a1;
- (long long)canAddProns:(id)a0 forWord:(id)a1 pronIsXsampa:(char)a2;
- (long long)canAddXsampaProns:(id)a0 forWord:(id)a1;
- (void)generateLmeData:(id)a0;
- (id)initWithAppLmData:(struct shared_ptr<quasar::AppLmData> { struct AppLmData *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithConfiguration:(id)a0 ncsRoot:(id)a1 recognizerConfigPath:(id)a2;
- (id)initWithConfiguration:(id)a0 recognizerConfigPath:(id)a1;
- (long long)inputType;
- (long long)lmeThreshold;
- (char)setAsrProns:(id)a0 forWord:(id)a1;
- (char)setProns:(id)a0 forWord:(id)a1 pronIsXsampa:(char)a2;
- (void)setRoundingEnabled:(char)a0;
- (char)setXsampaProns:(id)a0 forWord:(id)a1;
- (id)supportedSlots;

@end
