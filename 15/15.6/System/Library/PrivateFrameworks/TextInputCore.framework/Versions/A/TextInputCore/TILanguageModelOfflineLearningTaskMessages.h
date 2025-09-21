@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask {
    id<TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithClientIdentifier:(id)a0 oneTimeTask:(char)a1;

@end
