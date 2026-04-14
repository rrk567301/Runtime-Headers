@class NSDate, NSData, CKPackageReference, NSNumber, CKAssetTransferOptions;

@interface CKPackageInfo : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *packageID;
@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSData *verificationKey;
@property (retain, nonatomic) CKPackageReference *packageReference;
@property (retain, nonatomic) CKAssetTransferOptions *assetTransferOptions;
@property (copy, nonatomic) NSData *boundaryKey;
@property (copy, nonatomic) NSDate *expirationDate;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
