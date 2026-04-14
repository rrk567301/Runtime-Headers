@class NSArray, NSMutableSet;
@protocol IASDataStoreTableProtocol;

@interface IASDataStore : NSObject

@property (readonly, nonatomic) NSArray *tables;
@property (readonly, nonatomic) id<IASDataStoreTableProtocol> systemTable;
@property (retain, nonatomic) NSMutableSet *errors;

+ (id)sharedInstance;

- (BOOL)migrate;
- (BOOL)cleanup;
- (void).cxx_destruct;
- (id)initWithTables:(id)a0 andSystemTable:(id)a1;

@end
