@class NSString;

@interface AWDIDSOTRSessionNegotiation : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char priority : 1; unsigned char timestamp : 1; unsigned char result : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) char hasPriority;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) char hasResult;
@property (nonatomic) unsigned int result;

- (void)dealloc;
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
