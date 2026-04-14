@class PBUnknownFields, NSString, PBDataReader, GEORPRapProfileInfo, GEORPThirdPartyPhotoSharingPreferenceUpdateResult, NSMutableArray, GEORPPhotoAttributionPreferencesUpdateResult;

@interface GEORPFeedbackSubmissionResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_feedbackId;
    NSMutableArray *_imageIdMapEntrys;
    GEORPPhotoAttributionPreferencesUpdateResult *_photoAttributionPreferencesUpdateResult;
    GEORPRapProfileInfo *_rapInfo;
    GEORPThirdPartyPhotoSharingPreferenceUpdateResult *_thirdPartyPhotoSharingPreferenceUpdateResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_feedbackId : 1; unsigned char read_imageIdMapEntrys : 1; unsigned char read_photoAttributionPreferencesUpdateResult : 1; unsigned char read_rapInfo : 1; unsigned char read_thirdPartyPhotoSharingPreferenceUpdateResult : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasFeedbackId;
@property (retain, nonatomic) NSString *feedbackId;
@property (retain, nonatomic) NSMutableArray *imageIdMapEntrys;
@property (readonly, nonatomic) BOOL hasRapInfo;
@property (retain, nonatomic) GEORPRapProfileInfo *rapInfo;
@property (readonly, nonatomic) BOOL hasThirdPartyPhotoSharingPreferenceUpdateResult;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreferenceUpdateResult *thirdPartyPhotoSharingPreferenceUpdateResult;
@property (readonly, nonatomic) BOOL hasPhotoAttributionPreferencesUpdateResult;
@property (retain, nonatomic) GEORPPhotoAttributionPreferencesUpdateResult *photoAttributionPreferencesUpdateResult;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)imageIdMapEntryType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearImageIdMapEntrys;
- (void)addImageIdMapEntry:(id)a0;
- (unsigned long long)imageIdMapEntrysCount;
- (id)imageIdMapEntryAtIndex:(unsigned long long)a0;

@end
