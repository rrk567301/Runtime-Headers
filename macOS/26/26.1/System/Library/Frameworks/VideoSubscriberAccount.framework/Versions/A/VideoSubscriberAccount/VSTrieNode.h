@class NSMutableArray, NSMutableDictionary;

@interface VSTrieNode : NSObject

@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) NSMutableDictionary *next;

- (void).cxx_destruct;
- (id)init;

@end
