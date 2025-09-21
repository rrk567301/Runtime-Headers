@class NSString, CSSuggestion;

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying, EFPubliclyDescribable>

@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *searchString;
@property (readonly, copy, nonatomic) CSSuggestion *updatedSuggestion;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)expressionWithQueryString:(id)a0;
+ (id)expressionWithQueryString:(id)a0 searchString:(id)a1 updatedSuggestion:(id)a2;

@end
