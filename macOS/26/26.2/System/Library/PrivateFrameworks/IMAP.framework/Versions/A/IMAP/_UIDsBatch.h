@class NSMutableIndexSet;

@interface _UIDsBatch : NSObject

@property (retain, nonatomic) NSMutableIndexSet *uids;
@property (nonatomic) unsigned int expectedLength;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
