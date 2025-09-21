@class NSString;

@interface SearchUICompletionStringModel : NSObject

@property (readonly, nonatomic) NSString *displayedText;
@property (readonly, nonatomic) char searchFieldHasTokens;
@property (readonly, nonatomic) char hasMarkedText;
@property (readonly, nonatomic) unsigned long long queryId;

- (void).cxx_destruct;
- (id)initWithTypedString:(id)a0 hasTokens:(char)a1 queryId:(unsigned long long)a2 hasMarkedText:(char)a3;

@end
