@interface AWDDataFrames : PBCodable <NSCopying> {
    struct { unsigned char cFack : 1; unsigned char cFackCFpoll : 1; unsigned char cFpoll : 1; unsigned char dataCFack : 1; unsigned char dataCFackCFpoll : 1; unsigned char dataCFpoll : 1; unsigned char dataFrames : 1; unsigned char null : 1; unsigned char qoSdata : 1; unsigned char qoSdataCFack : 1; unsigned char qoSdataCFackCFpoll : 1; unsigned char qoSnodataCFack : 1; unsigned char qoSnodataCFpoll : 1; unsigned char qoSnull : 1; } _has;
}

@property (nonatomic) char hasDataFrames;
@property (nonatomic) unsigned long long dataFrames;
@property (nonatomic) char hasDataCFack;
@property (nonatomic) unsigned long long dataCFack;
@property (nonatomic) char hasDataCFpoll;
@property (nonatomic) unsigned long long dataCFpoll;
@property (nonatomic) char hasDataCFackCFpoll;
@property (nonatomic) unsigned long long dataCFackCFpoll;
@property (nonatomic) char hasNull;
@property (nonatomic) unsigned long long null;
@property (nonatomic) char hasCFack;
@property (nonatomic) unsigned long long cFack;
@property (nonatomic) char hasCFpoll;
@property (nonatomic) unsigned long long cFpoll;
@property (nonatomic) char hasCFackCFpoll;
@property (nonatomic) unsigned long long cFackCFpoll;
@property (nonatomic) char hasQoSdata;
@property (nonatomic) unsigned long long qoSdata;
@property (nonatomic) char hasQoSdataCFack;
@property (nonatomic) unsigned long long qoSdataCFack;
@property (nonatomic) char hasQoSdataCFackCFpoll;
@property (nonatomic) unsigned long long qoSdataCFackCFpoll;
@property (nonatomic) char hasQoSnull;
@property (nonatomic) unsigned long long qoSnull;
@property (nonatomic) char hasQoSnodataCFpoll;
@property (nonatomic) unsigned long long qoSnodataCFpoll;
@property (nonatomic) char hasQoSnodataCFack;
@property (nonatomic) unsigned long long qoSnodataCFack;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
