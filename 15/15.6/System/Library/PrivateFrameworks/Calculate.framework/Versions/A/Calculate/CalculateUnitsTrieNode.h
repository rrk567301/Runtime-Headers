@class TrieNode;

@interface CalculateUnitsTrieNode : NSObject

@property (retain, nonatomic) TrieNode *node;
@property (readonly, nonatomic) char isMatch;
@property (readonly, nonatomic) char containsConversionVerb;
@property (readonly, nonatomic) char containsCurrency;

+ (id)nodeWithTrieNode:(id)a0;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithTrieNode:(id)a0;

@end
