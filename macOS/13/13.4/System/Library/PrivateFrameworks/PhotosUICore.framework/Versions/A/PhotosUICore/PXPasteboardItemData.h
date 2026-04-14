@class NSString, NSArray, NSURL, PHObject, PHAsset;

@interface PXPasteboardItemData : NSObject <NSPasteboardItemDataProvider>

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) PHObject *object;
@property (retain, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) BOOL exportAsMaster;
@property (readonly, nonatomic) BOOL stripLocation;
@property (readonly, nonatomic) NSArray *types;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataForObject:(id)a0 exportAsMaster:(BOOL)a1 stripLocation:(BOOL)a2;
+ (id)imageInfoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)typesForAsset:(id)a0 previewType:(id)a1;

@end
