@class XCElementSnapshot, NSSet, NSString, NSMutableSet, XCTElementIndexingTransformer;
@protocol XCTElementSetTransformer;

@interface XCTIndexingTransformerIterator : NSObject <XCTMatchingElementIterator>

@property (readonly) XCTElementIndexingTransformer *indexingTransformer;
@property (retain) XCElementSnapshot *input;
@property unsigned long long count;
@property (readonly) BOOL hasMatched;
@property (retain) XCElementSnapshot *currentMatch;
@property (readonly) NSMutableSet *mutableRelatedElements;
@property (readonly) NSSet *currentRelatedElements;
@property (readonly) id<XCTElementSetTransformer> transformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)nextMatch;
- (id)initWithInput:(id)a0 filteringTransformer:(id)a1;

@end
