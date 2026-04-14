@class NSString, SIRINLUEXTERNALAsrHypothesis;

@interface SEMSpanMatchQuery : NSObject {
    struct shared_ptr<semskitbridge::Query> { struct Query *__ptr_; struct __shared_weak_count *__cntrl_; } _query;
    long long _locale;
    NSString *_originalText;
    SIRINLUEXTERNALAsrHypothesis *_asrHypothesis;
}

+ (void)initialize;

- (void *)query;
- (id)locale;
- (id)originalText;
- (id)init;
- (id)description;
- (id).cxx_construct;
- (unsigned int)tokenCount;
- (void).cxx_destruct;
- (void)setEntityFilters:(id)a0;
- (void)setIncludedKVFieldTypes:(id)a0;
- (void)setIncludedKVItemTypes:(id)a0;
- (void)_addCascadeEntityFilter:(id)a0;
- (id)initWithQuery:(const void *)a0 locale:(long long)a1 originalText:(id)a2 asrHypothesis:(id)a3;
- (BOOL)isCascadeFieldTypeIncluded:(unsigned short)a0;
- (BOOL)isCascadeItemTypeIncluded:(unsigned short)a0;

@end
