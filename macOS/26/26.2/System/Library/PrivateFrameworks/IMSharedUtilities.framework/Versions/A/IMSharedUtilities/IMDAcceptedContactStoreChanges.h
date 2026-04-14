@class NSDictionary, NSArray;

@interface IMDAcceptedContactStoreChanges : NSObject

@property (retain, nonatomic) NSDictionary *updatedMap;
@property (retain, nonatomic) NSArray *deletedCNIDs;
@property (retain, nonatomic) NSArray *deletedAliases;

- (void).cxx_destruct;
- (id)init;

@end
