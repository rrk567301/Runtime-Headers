@interface BMPBMindfulnessSessionEvent : PBCodable <NSCopying> {
    struct { unsigned char sessionType : 1; unsigned char stateType : 1; } _has;
}

@property (nonatomic) char hasSessionType;
@property (nonatomic) int sessionType;
@property (nonatomic) char hasStateType;
@property (nonatomic) int stateType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsStateType:(id)a0;
- (id)stateTypeAsString:(int)a0;
- (int)StringAsSessionType:(id)a0;
- (id)sessionTypeAsString:(int)a0;

@end
