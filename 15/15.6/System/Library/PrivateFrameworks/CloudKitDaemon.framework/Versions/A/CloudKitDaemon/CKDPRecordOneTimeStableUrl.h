@class NSData, NSMutableArray;

@interface CKDPRecordOneTimeStableUrl : PBCodable <NSCopying> {
    struct { unsigned char createdTime : 1; } _has;
}

@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (readonly, nonatomic) char hasProtectedFullToken;
@property (retain, nonatomic) NSData *protectedFullToken;
@property (readonly, nonatomic) char hasEncryptedFullTokenInfo;
@property (retain, nonatomic) NSData *encryptedFullTokenInfo;
@property (retain, nonatomic) NSMutableArray *participantIds;
@property (nonatomic) char hasCreatedTime;
@property (nonatomic) double createdTime;

+ (Class)participantIdType;

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
- (void)clearParticipantIds;
- (unsigned long long)participantIdsCount;
- (void)addParticipantId:(id)a0;
- (id)participantIdAtIndex:(unsigned long long)a0;

@end
