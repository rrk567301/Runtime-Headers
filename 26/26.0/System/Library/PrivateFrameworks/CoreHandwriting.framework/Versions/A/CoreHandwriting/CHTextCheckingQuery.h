@class NSArray;

@interface CHTextCheckingQuery : CHQuery {
    NSArray *_foundItems;
}

@property (readonly, copy, nonatomic) NSArray *foundItems;

- (id)debugName;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (BOOL)q_doesQueryResultDependOnDeclaredVariables;
- (BOOL)q_resultWantedForCompleteness:(long long)a0;
- (void)q_updateQueryResult;

@end
