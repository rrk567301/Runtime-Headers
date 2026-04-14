@class NSArray, NSDictionary;

@interface PKAutoRefineLogEntry : NSObject

@property (readonly) NSArray *refinedStrokes;
@property (readonly) NSArray *originalStrokes;
@property (readonly) NSArray *unchangedStrokes;
@property (readonly) NSDictionary *debugInfo;

- (void).cxx_destruct;
- (id)initWithRefinedStrokes:(id)a0 originalStrokes:(id)a1 unchangedStrokes:(id)a2 debugInfo:(id)a3;

@end
