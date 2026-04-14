@class NSString;

@interface ATXMPBDonationCountTracker : PBCodable <NSCopying> {
    struct { unsigned char actionType : 1; unsigned char count : 1; } _has;
}

@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsActionType:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
