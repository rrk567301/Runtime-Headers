@class NSNumber, NSData, CKSQLitePackage;

@interface CKPackageSection : NSObject

@property (retain, nonatomic) NSNumber *sectionID;
@property (copy, nonatomic) NSData *verificationKey;
@property (copy, nonatomic) NSData *signature;
@property (retain, nonatomic) CKSQLitePackage *package;
@property (readonly, nonatomic) unsigned long long sectionIndex;
@property (nonatomic) unsigned long long manifestSize;

- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIndex:(unsigned long long)a0 signature:(id)a1 verificationKey:(id)a2;
- (unsigned long long)paddedSize:(id *)a0;
- (unsigned long long)size:(id *)a0;

@end
