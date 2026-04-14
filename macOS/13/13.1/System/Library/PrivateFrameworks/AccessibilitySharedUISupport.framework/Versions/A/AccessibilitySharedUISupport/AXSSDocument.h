@class NSArray, NSMutableArray;

@interface AXSSDocument : NSObject

@property (retain, nonatomic) NSMutableArray *_nodes;
@property (readonly, copy, nonatomic) NSArray *nodes;

+ (id)documentWithText:(id)a0;
+ (id)documentWithAttributedText:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addNode:(id)a0;
- (id)generateAllIssues;
- (id)_generateAllDocIssues;
- (id)_generateAllWordIssues;
- (id)stringByAcceptingFirstSuggestionForIssues:(id)a0;

@end
