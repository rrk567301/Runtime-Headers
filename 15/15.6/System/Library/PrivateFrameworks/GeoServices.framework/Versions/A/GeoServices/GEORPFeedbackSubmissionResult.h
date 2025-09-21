@class NSString, GEORPTdmFraudRequestInfo, GEORPRapProfileInfo, PBDataReader, PBUnknownFields, NSMutableArray, GEORPThirdPartyPhotoSharingPreferenceUpdateResult, GEORPPhotoAttributionPreferencesUpdateResult;

@interface GEORPFeedbackSubmissionResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_feedbackId;
    NSMutableArray *_imageIdMapEntrys;
    GEORPPhotoAttributionPreferencesUpdateResult *_photoAttributionPreferencesUpdateResult;
    GEORPRapProfileInfo *_rapInfo;
    GEORPTdmFraudRequestInfo *_tdmFraudRequestInfo;
    GEORPThirdPartyPhotoSharingPreferenceUpdateResult *_thirdPartyPhotoSharingPreferenceUpdateResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_feedbackId : 1; unsigned char read_imageIdMapEntrys : 1; unsigned char read_photoAttributionPreferencesUpdateResult : 1; unsigned char read_rapInfo : 1; unsigned char read_tdmFraudRequestInfo : 1; unsigned char read_thirdPartyPhotoSharingPreferenceUpdateResult : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasFeedbackId;
@property (retain, nonatomic) NSString *feedbackId;
@property (retain, nonatomic) NSMutableArray *imageIdMapEntrys;
@property (readonly, nonatomic) char hasRapInfo;
@property (retain, nonatomic) GEORPRapProfileInfo *rapInfo;
@property (readonly, nonatomic) char hasThirdPartyPhotoSharingPreferenceUpdateResult;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreferenceUpdateResult *thirdPartyPhotoSharingPreferenceUpdateResult;
@property (readonly, nonatomic) char hasPhotoAttributionPreferencesUpdateResult;
@property (retain, nonatomic) GEORPPhotoAttributionPreferencesUpdateResult *photoAttributionPreferencesUpdateResult;
@property (readonly, nonatomic) char hasTdmFraudRequestInfo;
@property (retain, nonatomic) GEORPTdmFraudRequestInfo *tdmFraudRequestInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)imageIdMapEntryType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addImageIdMapEntry:(id)a0;
- (void)clearImageIdMapEntrys;
- (void)clearUnknownFields:(char)a0;
- (id)imageIdMapEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)imageIdMapEntrysCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
