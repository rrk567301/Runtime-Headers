@interface AWDWRMULCACoexStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char uLCACriCarDLBW : 1; unsigned char uLCACriCarDLFreq : 1; unsigned char uLCACriCarULBW : 1; unsigned char uLCACriCarULFreq : 1; unsigned char uLCAPriCarDLBW : 1; unsigned char uLCAPriCarDLFreq : 1; unsigned char uLCAPriCarULBW : 1; unsigned char uLCAPriCarULFreq : 1; unsigned char uLCAHasCoexBand : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasULCAHasCoexBand;
@property (nonatomic) char uLCAHasCoexBand;
@property (nonatomic) char hasULCAPriCarULFreq;
@property (nonatomic) unsigned int uLCAPriCarULFreq;
@property (nonatomic) char hasULCAPriCarDLFreq;
@property (nonatomic) unsigned int uLCAPriCarDLFreq;
@property (nonatomic) char hasULCAPriCarULBW;
@property (nonatomic) unsigned int uLCAPriCarULBW;
@property (nonatomic) char hasULCAPriCarDLBW;
@property (nonatomic) unsigned int uLCAPriCarDLBW;
@property (nonatomic) char hasULCACriCarULFreq;
@property (nonatomic) unsigned int uLCACriCarULFreq;
@property (nonatomic) char hasULCACriCarDLFreq;
@property (nonatomic) unsigned int uLCACriCarDLFreq;
@property (nonatomic) char hasULCACriCarULBW;
@property (nonatomic) unsigned int uLCACriCarULBW;
@property (nonatomic) char hasULCACriCarDLBW;
@property (nonatomic) unsigned int uLCACriCarDLBW;

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
