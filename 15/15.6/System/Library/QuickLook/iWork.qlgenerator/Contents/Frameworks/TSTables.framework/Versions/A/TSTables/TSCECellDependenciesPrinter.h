@class NSString, NSMutableArray;

@interface TSCECellDependenciesPrinter : NSObject

@property (retain, nonatomic) NSMutableArray *dirtyCellDependencyRows;
@property (retain, nonatomic) NSMutableArray *cleanCellDependencyRows;
@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) unsigned long long numDirtyCells;
@property (nonatomic) char showCleanCells;

+ (id)stringForOwnerKind:(unsigned short)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addDependencyRow:(id)a0;

@end
