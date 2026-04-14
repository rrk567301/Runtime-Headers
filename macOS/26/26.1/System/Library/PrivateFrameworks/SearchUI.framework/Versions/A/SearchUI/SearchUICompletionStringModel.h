@class NSAttributedString;

@interface SearchUICompletionStringModel : NSObject

@property (readonly, nonatomic) NSAttributedString *displayedText;
@property (readonly, nonatomic) BOOL searchFieldHasTokens;
@property (readonly, nonatomic) BOOL hasMarkedText;
@property (readonly, nonatomic) unsigned long long queryId;

- (void).cxx_destruct;
- (id)initWithAttributedTypedString:(id)a0 hasTokens:(BOOL)a1 queryId:(unsigned long long)a2 hasMarkedText:(BOOL)a3;
- (id)initWithTypedString:(id)a0 hasTokens:(BOOL)a1 queryId:(unsigned long long)a2 hasMarkedText:(BOOL)a3;

@end
