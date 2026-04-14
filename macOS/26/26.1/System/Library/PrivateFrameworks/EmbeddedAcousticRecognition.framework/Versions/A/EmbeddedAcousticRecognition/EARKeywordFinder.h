@interface EARKeywordFinder : NSObject {
    struct unique_ptr<quasar::KeywordFinder, std::default_delete<quasar::KeywordFinder>> { struct KeywordFinder *__ptr_; } _kwf;
}

+ (void)initialize;

- (id)initWithConfiguration:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)correctedResultWithKeyword:(id)a0 tokenizedKeyword:(id)a1 preItnSausage:(id)a2 preItnOneBest:(id)a3 preItnOneBestIndices:(id)a4 nbestSize:(long long)a5;

@end
