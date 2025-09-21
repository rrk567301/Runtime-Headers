@class NSNumber;

@interface CKSQLiteReferencedCollectionTableEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *referenceID;
@property (retain, nonatomic) NSNumber *collectionID;
@property (retain, nonatomic) NSNumber *elementIndex;
@property (retain, nonatomic) id element;
@property (retain, nonatomic) id collection;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
