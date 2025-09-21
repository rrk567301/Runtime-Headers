@class NSSet, CUIMutableCommonAssetStorage, NSString;

@interface TDAssetPack : NSObject <NSCopying>

@property (retain) CUIMutableCommonAssetStorage *assetStore;
@property (retain, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSString *outputPath;
@property (copy, nonatomic) NSString *assetPackIdentifier;
@property (nonatomic) char wasModified;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
