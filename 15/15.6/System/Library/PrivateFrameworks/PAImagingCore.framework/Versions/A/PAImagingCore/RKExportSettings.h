@class NSString;

@interface RKExportSettings : NSObject <NSCopying>

@property (nonatomic) long long imageFormat;
@property (nonatomic) double imageQuality;
@property (nonatomic) int sizeStyle;
@property (nonatomic) long long destinationPixelWidth;
@property (nonatomic) long long destinationPixelHeight;
@property (nonatomic) long long colorSpace;
@property (nonatomic) unsigned long long renderingIntent;
@property (nonatomic) char blackPointCompensation;
@property (retain, nonatomic) NSString *movieExportQuality;
@property (nonatomic) char includeGPS;
@property (nonatomic) char includeIPTC;
@property (nonatomic) char skipBurstMasterExport;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)archiveDictionary;
- (id)initWithArchiveDictionary:(id)a0;
- (id)exportFormat;
- (void)setToArchiveDictionary:(id)a0;
- (char)usePreviewResources;

@end
