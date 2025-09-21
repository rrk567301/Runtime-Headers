@class NSString;

@interface PLPhotoLibraryFileIdentifier : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned short bundleScope;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) unsigned int resourceVersion;
@property (readonly, nonatomic) unsigned int recipeId;
@property (readonly, nonatomic) char isData;

+ (id)uuidFromURL:(id)a0;
+ (id)fileIdentifierForValidOriginalURL:(id)a0;
+ (id)fileIdentifierForValidOriginalURL:(id)a0 originalsDirectoryName:(id)a1;
+ (char)isValidFileIdentifierParametersForUUID:(id)a0 utiString:(id)a1 originalFilename:(id)a2;
+ (char)isValidOriginalURL:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)extension;
- (id)initWithAssetUuid:(id)a0 bundleScope:(unsigned short)a1 uti:(id)a2 resourceVersion:(unsigned int)a3 resourceType:(unsigned int)a4;
- (id)initWithAssetUuid:(id)a0 bundleScope:(unsigned short)a1 uti:(id)a2 resourceVersion:(unsigned int)a3 recipeID:(unsigned int)a4;
- (id)initWithAssetUuid:(id)a0 bundleScope:(unsigned short)a1 uti:(id)a2 resourceVersion:(unsigned int)a3 resourceType:(unsigned int)a4 recipeID:(unsigned int)a5 originalFilename:(id)a6;

@end
