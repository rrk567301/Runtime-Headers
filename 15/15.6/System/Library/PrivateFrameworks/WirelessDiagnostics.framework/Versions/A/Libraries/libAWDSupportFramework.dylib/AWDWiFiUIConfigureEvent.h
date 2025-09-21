@class NSString;

@interface AWDWiFiUIConfigureEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char previousType : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasProcess;
@property (retain, nonatomic) NSString *process;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) char hasPreviousType;
@property (nonatomic) unsigned int previousType;

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
