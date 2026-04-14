@class SEMSpanMatchQuery;

@interface KVSpanMatchQuery : NSObject

@property (readonly, nonatomic) SEMSpanMatchQuery *query;

- (id)initWithQuery:(id)a0;
- (void).cxx_destruct;
- (id)locale;
- (id)description;
- (id)cleanText;
- (void)setIncludedFieldTypes:(id)a0;
- (void)setIncludedItemTypes:(id)a0;

@end
