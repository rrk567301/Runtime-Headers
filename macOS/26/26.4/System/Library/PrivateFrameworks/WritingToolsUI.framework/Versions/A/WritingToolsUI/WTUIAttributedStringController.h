@class NSDictionary, NSMutableDictionary;

@interface WTUIAttributedStringController : NSObject

@property (retain) NSMutableDictionary *contextsToDigests;
@property (copy, nonatomic) NSDictionary *typingAttributes;

- (void).cxx_destruct;
- (id)digestedAttributedStringForContext:(id)a0;
- (id)initWithContexts:(id)a0 resultOptions:(unsigned long long)a1 typingAttributes:(id)a2;
- (id)reconstitutedAttributedStringForContext:(id)a0 digestedAttributedString:(id)a1;
- (id)reconstitutedAttributedStringForStitchedContext:(id)a0;

@end
