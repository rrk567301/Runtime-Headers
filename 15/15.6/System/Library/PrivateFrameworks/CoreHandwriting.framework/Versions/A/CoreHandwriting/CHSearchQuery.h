@class NSString, NSArray;

@interface CHSearchQuery : CHQuery {
    NSArray *_foundItems;
}

@property (copy, nonatomic) NSString *queryString;
@property (nonatomic) char caseMatchingOnly;
@property (nonatomic) char fullWordsOnly;
@property (readonly, copy, nonatomic) NSArray *foundItems;

- (void).cxx_destruct;
- (void)stop;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (id)q_foundItemsForSearchString:(id)a0 sessionResult:(id)a1;
- (void)q_updateQueryResult;

@end
