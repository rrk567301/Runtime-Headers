@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject

@property (retain, nonatomic) CKAsset *asset;
@property (nonatomic) struct _OpaquePCSShareProtection { } *recordPCS;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)dealloc;

@end
