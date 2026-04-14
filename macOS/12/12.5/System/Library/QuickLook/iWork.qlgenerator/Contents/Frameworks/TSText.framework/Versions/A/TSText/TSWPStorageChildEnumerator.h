@class NSArray, TSWPStorage;

@interface TSWPStorageChildEnumerator : NSEnumerator

@property (retain, nonatomic) TSWPStorage *storage;
@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSArray *charOffsetArray;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;

@end
