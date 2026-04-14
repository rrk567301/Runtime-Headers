@class NSString, FedStatsSQLiteCategoryDatabase;

@interface FedStatsCategoricalTypeNgramTokenizer : NSObject <FedStatsCategoricalTypeTokenizerProtocol>

@property (readonly, nonatomic) BOOL removePunctuation;
@property (readonly, copy, nonatomic) NSString *shuffleMethod;
@property (readonly, copy, nonatomic) FedStatsSQLiteCategoryDatabase *popularWordsDB;
@property (readonly, nonatomic) BOOL tokenizePerson;
@property (readonly, nonatomic) BOOL tokenizeLocation;
@property (readonly, nonatomic) BOOL tokenizeNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithParameters:(id)a0 error:(id *)a1;
+ (id)mutateParameters:(id)a0 usingFieldValues:(id)a1 assetURLs:(id)a2 requiredFields:(id *)a3 assetNames:(id *)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)tokenize:(id)a0;
- (id)initWithRemovePunctuation:(BOOL)a0 shuffleMethod:(id)a1 popularWordsDB:(id)a2 tokenizePerson:(BOOL)a3 tokenizeLocation:(BOOL)a4 tokenizeNumber:(BOOL)a5;
- (void)shuffleWords:(id)a0;
- (id)tokenizeSentence:(id)a0;

@end
