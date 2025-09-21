@class NSDictionary, NSArray;

@interface IMDAcceptedContactStoreChanges : NSObject

@property (retain, nonatomic) NSDictionary *updatedMap;
@property (retain, nonatomic) NSArray *deletedCNIDs;
@property (retain, nonatomic) NSArray *deletedAliases;

- (id)init;
- (void).cxx_destruct;

@end
