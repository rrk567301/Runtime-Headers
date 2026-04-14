@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject

@property (retain, nonatomic) CKAsset *asset;
@property (nonatomic) struct _OpaquePCSShareProtection { } *recordPCS;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
