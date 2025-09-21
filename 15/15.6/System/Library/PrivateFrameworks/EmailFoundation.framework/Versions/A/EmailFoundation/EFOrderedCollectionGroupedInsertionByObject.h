@class NSArray;

@interface EFOrderedCollectionGroupedInsertionByObject : NSObject

@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly, nonatomic) id previousObject;
@property (readonly, nonatomic) id nextObject;
@property (readonly, nonatomic) char isMove;

- (void).cxx_destruct;
- (id)initWithObjects:(id)a0 previousObject:(id)a1 nextObject:(id)a2 isMove:(char)a3;

@end
