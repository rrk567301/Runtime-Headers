@class NSString;

@interface TSCH3DFillSetIdentifier : NSObject {
    int _seriesIndex;
    int _fillPropertyType;
}

@property (readonly, nonatomic) NSString *textureSetID;
@property (readonly, nonatomic) NSString *textureSetFilename;
@property (readonly, nonatomic) unsigned long long seriesIndex;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)instanceWithDEPRECATEDArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)identifierWithFillName:(id)a0 seriesName:(id)a1 textureSetID:(id)a2;
+ (id)identifierWithFillPropertyType:(int)a0 seriesIndex:(unsigned long long)a1 textureSetID:(id)a2;
+ (id)identifierWithContentsOfDictionary:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setSeriesIndex:(unsigned long long)a0;
- (id)initWithContentsOfDictionary:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)didInitFromSOS;
- (id)localDirectoryPath;
- (id)lowResLocalDirectoryPath;
- (id)mipmapLocalDirectoryPath;
- (id)textureOnDemandResourceTag;
- (id)mipmapOnDemandResourceTag;
- (BOOL)isStoredInLocalBundle;
- (BOOL)isOnDemandResource;
- (id)lowResTextureSetFilename;
- (id)mipmapTextureSetFilename;
- (id)initWithFillName:(id)a0 seriesName:(id)a1 textureSetID:(id)a2;
- (id)initWithFillPropertyType:(int)a0 seriesIndex:(unsigned long long)a1 textureSetID:(id)a2;
- (id)p_sageFillPropertyNames;
- (id)sageFillName;
- (int)fillPropertyTypeFromName:(id)a0;
- (id)p_sageSeriesNames;
- (id)sageSeriesName;
- (unsigned long long)seriesIndexFromSageSeriesName:(id)a0;
- (id)p_sageFillSetList;
- (id)p_plistPath;
- (id)p_plistData;
- (id)p_loadPlist;
- (id)p_getPlist;
- (id)p_version;
- (BOOL)isSageCompatible;
- (id)loadPropertiesDictionary;
- (unsigned long long)countOfSeriesInFillSet;

@end
