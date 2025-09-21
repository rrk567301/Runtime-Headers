@class NSString, NSData;

@interface SGDCKInteractionInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasInteractionId;
@property (retain, nonatomic) NSString *interactionId;
@property (readonly, nonatomic) char hasInteractionGroupId;
@property (retain, nonatomic) NSString *interactionGroupId;
@property (readonly, nonatomic) char hasInteractionBundleId;
@property (retain, nonatomic) NSString *interactionBundleId;
@property (readonly, nonatomic) char hasReservationItemReferences;
@property (retain, nonatomic) NSData *reservationItemReferences;
@property (readonly, nonatomic) char hasReservationContainerReference;
@property (retain, nonatomic) NSData *reservationContainerReference;
@property (readonly, nonatomic) char hasIntentResponseUserActivityString;
@property (retain, nonatomic) NSString *intentResponseUserActivityString;
@property (readonly, nonatomic) char hasInteractionTeamId;
@property (retain, nonatomic) NSString *interactionTeamId;

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

@end
