@class NSString;

@interface BMPBAskToBuyEvent : PBCodable <NSCopying> {
    struct { unsigned char eventTime : 1; unsigned char starRating : 1; unsigned char status : 1; unsigned char isActionUserDevice : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) char hasEventTime;
@property (nonatomic) double eventTime;
@property (readonly, nonatomic) char hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (readonly, nonatomic) char hasActionUserID;
@property (retain, nonatomic) NSString *actionUserID;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) char hasItemTitle;
@property (retain, nonatomic) NSString *itemTitle;
@property (readonly, nonatomic) char hasItemDescription;
@property (retain, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) char hasItemLocalizedPrice;
@property (retain, nonatomic) NSString *itemLocalizedPrice;
@property (readonly, nonatomic) char hasThumbnailPath;
@property (retain, nonatomic) NSString *thumbnailPath;
@property (readonly, nonatomic) char hasAgeRating;
@property (retain, nonatomic) NSString *ageRating;
@property (nonatomic) char hasStarRating;
@property (nonatomic) float starRating;
@property (readonly, nonatomic) char hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) char hasIsActionUserDevice;
@property (nonatomic) char isActionUserDevice;
@property (readonly, nonatomic) char hasStoreLink;
@property (retain, nonatomic) NSString *storeLink;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;

@end
