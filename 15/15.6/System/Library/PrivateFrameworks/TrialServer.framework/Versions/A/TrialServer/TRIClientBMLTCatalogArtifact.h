@class TRIClientBmltCatalog, NSNumber;

@interface TRIClientBMLTCatalogArtifact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) TRIClientBmltCatalog *bmltCatalog;
@property (readonly, nonatomic) NSNumber *population;

+ (char)_hasStructurallyValidBMLTs:(id)a0 population:(id)a1;
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecord:(id)a0 error:(id *)a1;
+ (id)artifactWithBmltCatalog:(id)a0 population:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementBmltCatalog:(id)a0;
- (id)initWithBmltCatalog:(id)a0 population:(id)a1;
- (id)copyWithReplacementPopulation:(id)a0;
- (char)isEqualToArtifact:(id)a0;

@end
