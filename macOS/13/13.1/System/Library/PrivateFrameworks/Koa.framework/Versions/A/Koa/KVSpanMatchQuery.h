@class NSString;

@interface KVSpanMatchQuery : NSObject {
    long long _locale;
    NSString *_cleanText;
}

@property (readonly, nonatomic) struct shared_ptr<skitbridge::Query> { struct Query *__ptr_; struct __shared_weak_count *__cntrl_; } query;

+ (void)initialize;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)locale;
- (id).cxx_construct;
- (id)cleanText;
- (id)initWithQuery:(const void *)a0 locale:(long long)a1 cleanText:(id)a2;
- (void)setIncludedItemTypes:(id)a0;
- (void)setIncludedFieldTypes:(id)a0;
- (BOOL)isItemTypeIncluded:(long long)a0;
- (BOOL)isFieldTypeIncluded:(long long)a0;

@end
