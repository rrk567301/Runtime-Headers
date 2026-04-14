@class NSString, PSIDateFilter;

@interface PLSearchSuggestionTemplate : NSObject

@property (retain, nonatomic) PSIDateFilter *dateFilter;
@property (readonly, copy, nonatomic) NSString *suggestionTemplateKey;
@property (readonly, nonatomic) unsigned long long firstIndexCategory;
@property (readonly, nonatomic) unsigned long long secondIndexCategory;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isMeTemplate;
@property (readonly, nonatomic) unsigned long long templateContentType;
@property (readonly, nonatomic) unsigned long long templateDateType;
@property (readonly, nonatomic) unsigned long long templateType;
@property (readonly, nonatomic) unsigned long long templateStyleType;
@property (readonly, nonatomic) unsigned long long localeSupportType;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithSuggestionTemplateKey:(id)a0 firstIndexCategory:(unsigned long long)a1 secondIndexCategory:(unsigned long long)a2 templateType:(unsigned long long)a3 templateContentType:(unsigned long long)a4 templateDateType:(unsigned long long)a5 styleType:(unsigned long long)a6 identifier:(id)a7;
- (id)initForTestingWithSuggestionTemplateKey:(id)a0 firstIndexCategory:(unsigned long long)a1 secondIndexCategory:(unsigned long long)a2 templateType:(unsigned long long)a3 templateContentType:(unsigned long long)a4 templateDateType:(unsigned long long)a5 styleType:(unsigned long long)a6 identifier:(id)a7;
- (id)initWithSuggestionTemplateKey:(id)a0 firstIndexCategory:(unsigned long long)a1 secondIndexCategory:(unsigned long long)a2 templateType:(unsigned long long)a3 templateContentType:(unsigned long long)a4 templateDateType:(unsigned long long)a5 styleType:(unsigned long long)a6 identifier:(id)a7;
- (BOOL)isDateOnlyTemplate;

@end
