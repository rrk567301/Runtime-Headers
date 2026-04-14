@class NSNumber, NSData;

@interface CKSQLiteReferencedDataArrayValueEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *referenceID;
@property (retain, nonatomic) NSData *dataBlob;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
