@class NSString, SIRINLUEXTERNALAsrHypothesis;

@interface SEMSpanMatchQuery : NSObject {
    struct shared_ptr<semskitbridge::Query> { struct Query *__ptr_; struct __shared_weak_count *__cntrl_; } _query;
    long long _locale;
    NSString *_originalText;
    SIRINLUEXTERNALAsrHypothesis *_asrHypothesis;
}

+ (void)initialize;

- (void *)query;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)tokenCount;
- (id)locale;
- (id)originalText;
- (id).cxx_construct;
- (void)setEntityFilters:(id)a0;
- (void)setIncludedKVFieldTypes:(id)a0;
- (void)setIncludedKVItemTypes:(id)a0;
- (void)_addCascadeEntityFilter:(id)a0;
- (id)initWithQuery:(const void *)a0 locale:(long long)a1 originalText:(id)a2 asrHypothesis:(id)a3;
- (BOOL)isCascadeFieldTypeIncluded:(unsigned short)a0;
- (BOOL)isCascadeItemTypeIncluded:(unsigned short)a0;

@end
