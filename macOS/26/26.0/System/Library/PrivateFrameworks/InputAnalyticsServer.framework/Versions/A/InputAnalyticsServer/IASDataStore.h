@class NSArray;
@protocol IASDataStoreTableProtocol;

@interface IASDataStore : NSObject

@property (readonly, nonatomic) NSArray *tables;
@property (readonly, nonatomic) id<IASDataStoreTableProtocol> systemTable;

- (BOOL)migrate;
- (BOOL)cleanup;
- (void).cxx_destruct;
- (id)initWithTables:(id)a0 AndSystemTable:(id)a1;

@end
