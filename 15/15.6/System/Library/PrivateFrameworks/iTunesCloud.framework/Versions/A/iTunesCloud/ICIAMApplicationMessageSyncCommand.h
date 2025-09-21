@class ICIAMApplicationMessage;

@interface ICIAMApplicationMessageSyncCommand : PBCodable <NSCopying> {
    struct { unsigned char commandSerialNumber : 1; unsigned char commandType : 1; } _has;
}

@property (nonatomic) char hasCommandType;
@property (nonatomic) int commandType;
@property (readonly, nonatomic) char hasApplicationMessage;
@property (retain, nonatomic) ICIAMApplicationMessage *applicationMessage;
@property (nonatomic) char hasCommandSerialNumber;
@property (nonatomic) long long commandSerialNumber;

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
- (int)StringAsCommandType:(id)a0;
- (id)commandTypeAsString:(int)a0;

@end
