@class NSString;

@interface ATXMPBDonationRatioTracker : PBCodable <NSCopying> {
    struct { unsigned char ratio : 1; unsigned char actionType : 1; } _has;
}

@property (nonatomic) char hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) char hasRatio;
@property (nonatomic) double ratio;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsActionType:(id)a0;
- (id)actionTypeAsString:(int)a0;

@end
