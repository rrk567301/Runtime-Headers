@class _SFPBQuickLookThumbnailImage, _SFPBShortcutsImage, _SFPBDefaultPunchoutAppIconImage, _SFPBPhotosAlbumImage, _SFPBPhotosMemoryImage, _SFPBSymbolImage, _SFPBGraphicalFloat, _SFPBLocalImage, _SFPBMonogramImage, NSString, _SFPBCalendarImage, _SFPBClockImage, _SFPBPointSize, _SFPBContactImage, _SFPBURLImage, NSData, _SFPBMediaArtworkImage, _SFPBAppIconImage, _SFPBPhotosLibraryImage;

@interface _SFPBImage : PBCodable <_SFPBImage, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSData *imageData;
@property (nonatomic) char isTemplate;
@property (nonatomic) char shouldCropToCircle;
@property (retain, nonatomic) _SFPBGraphicalFloat *cornerRadius;
@property (retain, nonatomic) _SFPBGraphicalFloat *scale;
@property (retain, nonatomic) _SFPBPointSize *size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic) int cornerRoundingStyle;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) _SFPBImage *badgingImage;
@property (nonatomic) int type;
@property (retain, nonatomic) _SFPBURLImage *urlImage;
@property (retain, nonatomic) _SFPBContactImage *contactImage;
@property (retain, nonatomic) _SFPBMonogramImage *monogramImage;
@property (retain, nonatomic) _SFPBLocalImage *localImage;
@property (retain, nonatomic) _SFPBAppIconImage *appIconImage;
@property (retain, nonatomic) _SFPBMediaArtworkImage *mediaArtworkImage;
@property (retain, nonatomic) _SFPBCalendarImage *calendarImage;
@property (retain, nonatomic) _SFPBSymbolImage *symbolImage;
@property (retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage;
@property (retain, nonatomic) _SFPBQuickLookThumbnailImage *quickLookThumbnailImage;
@property (retain, nonatomic) _SFPBClockImage *clockImage;
@property (retain, nonatomic) _SFPBShortcutsImage *shortcutsImage;
@property (retain, nonatomic) _SFPBDefaultPunchoutAppIconImage *defaultPunchoutAppIconImage;
@property (retain, nonatomic) _SFPBPhotosAlbumImage *photosAlbumImage;
@property (retain, nonatomic) _SFPBPhotosMemoryImage *photosMemoryImage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
