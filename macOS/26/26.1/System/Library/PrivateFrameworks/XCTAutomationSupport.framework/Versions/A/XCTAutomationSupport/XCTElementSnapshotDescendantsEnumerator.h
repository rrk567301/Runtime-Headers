@class NSEnumerator, NSMutableArray;

@interface XCTElementSnapshotDescendantsEnumerator : NSEnumerator

@property (retain) NSEnumerator *innerEnumerator;
@property (retain) NSMutableArray *unenumeratedDescendantsQueue;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithElementSnapshot:(id)a0;

@end
