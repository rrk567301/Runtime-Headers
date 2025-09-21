@class GEORPThirdPartyPhotoSharingPreference, GEORPRapInfo, PBDataReader, GEORPPhotoAttributionPreferences, GEORPFeedbackConversation, PBUnknownFields, GEORPFeedbackOverview, GEORPPoiEnrichment, GEORPFeedbackNotification;

@interface GEORPFeedbackComponentValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackConversation *_conversation;
    GEORPFeedbackNotification *_notification;
    GEORPFeedbackOverview *_overview;
    GEORPPhotoAttributionPreferences *_photoAttributionPreferences;
    GEORPPoiEnrichment *_poiEnrichment;
    GEORPRapInfo *_rapInfo;
    GEORPThirdPartyPhotoSharingPreference *_thirdPartyPhotoSharingPreferences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_conversation : 1; unsigned char read_notification : 1; unsigned char read_overview : 1; unsigned char read_photoAttributionPreferences : 1; unsigned char read_poiEnrichment : 1; unsigned char read_rapInfo : 1; unsigned char read_thirdPartyPhotoSharingPreferences : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasNotification;
@property (retain, nonatomic) GEORPFeedbackNotification *notification;
@property (readonly, nonatomic) char hasOverview;
@property (retain, nonatomic) GEORPFeedbackOverview *overview;
@property (readonly, nonatomic) char hasConversation;
@property (retain, nonatomic) GEORPFeedbackConversation *conversation;
@property (readonly, nonatomic) char hasPoiEnrichment;
@property (retain, nonatomic) GEORPPoiEnrichment *poiEnrichment;
@property (readonly, nonatomic) char hasRapInfo;
@property (retain, nonatomic) GEORPRapInfo *rapInfo;
@property (readonly, nonatomic) char hasThirdPartyPhotoSharingPreferences;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreference *thirdPartyPhotoSharingPreferences;
@property (readonly, nonatomic) char hasPhotoAttributionPreferences;
@property (retain, nonatomic) GEORPPhotoAttributionPreferences *photoAttributionPreferences;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
