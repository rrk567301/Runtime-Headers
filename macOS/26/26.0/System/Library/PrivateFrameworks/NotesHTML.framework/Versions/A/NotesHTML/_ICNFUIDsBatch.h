@class NSMutableIndexSet;

@interface _ICNFUIDsBatch : NSObject

@property (retain, nonatomic) NSMutableIndexSet *uids;
@property (nonatomic) unsigned int expectedLength;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
