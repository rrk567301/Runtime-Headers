@class NSString;

@interface PSIInitialSuggestionIdentifier : NSObject

@property (readonly, nonatomic) NSString *suggestionTemplateKey;
@property (readonly, nonatomic) unsigned long long firstGroupId;
@property (readonly, nonatomic) unsigned long long secondGroupId;

- (id)dictionary;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestionTemplateKey:(id)a0 firstGroupId:(unsigned long long)a1 secondGroupId:(unsigned long long)a2;

@end
