@class NSString;

@interface PSIInitialSuggestionIdentifier : NSObject

@property (readonly, nonatomic) NSString *suggestionTemplateKey;
@property (readonly, nonatomic) unsigned long long firstGroupId;
@property (readonly, nonatomic) unsigned long long secondGroupId;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initWithSuggestionTemplateKey:(id)a0 firstGroupId:(unsigned long long)a1 secondGroupId:(unsigned long long)a2;

@end
