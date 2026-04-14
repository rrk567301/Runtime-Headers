@class NSMutableIndexSet;

@interface _UIDsBatch : NSObject

@property (retain, nonatomic) NSMutableIndexSet *uids;
@property (nonatomic) unsigned int expectedLength;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
