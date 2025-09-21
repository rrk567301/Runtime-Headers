@class NSString, NSArray;

@interface GDEntityResolutionRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *entityClassFilter;
@property (readonly, copy, nonatomic) NSArray *spans;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long constraint;
@property (readonly, copy, nonatomic) NSArray *sourceIDs;
@property (readonly, copy, nonatomic) NSString *kgq;
@property (readonly, nonatomic) char includeFeatures;
@property (readonly, nonatomic) char includeInferredNames;
@property (readonly, nonatomic) char enableBackupSearch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceIDs:(id)a0 text:(id)a1 spans:(id)a2 mode:(long long)a3 includeFeatures:(char)a4;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2;
- (id)initWithKgq:(id)a0 text:(id)a1 mode:(long long)a2 includeFeatures:(char)a3;
- (id)initWithKgq:(id)a0 mode:(long long)a1;
- (id)initWithKgq:(id)a0 text:(id)a1 mode:(long long)a2;
- (id)initWithKgq:(id)a0 text:(id)a1 mode:(long long)a2 includeFeatures:(char)a3 includeInferredNames:(char)a4;
- (id)initWithSourceIDs:(id)a0 text:(id)a1 mode:(long long)a2;
- (id)initWithSourceIDs:(id)a0 text:(id)a1 mode:(long long)a2 includeFeatures:(char)a3;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 includeInferredNames:(char)a3;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 includeInferredNames:(char)a3 enableBackupSearch:(char)a4;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 includeInferredNames:(char)a5;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 kgq:(id)a5;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 sourceIDs:(id)a5 kgq:(id)a6;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 sourceIDs:(id)a5 kgq:(id)a6 includeFeatures:(char)a7;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 sourceIDs:(id)a5 kgq:(id)a6 includeFeatures:(char)a7 includeInferredNames:(char)a8;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 sourceIDs:(id)a5 kgq:(id)a6 includeFeatures:(char)a7 includeInferredNames:(char)a8 enableBackupSearch:(char)a9;

@end
