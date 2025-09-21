@class NSString;

@interface AWDWiFiUIEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char stateEnum : 1; unsigned char state : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasProcess;
@property (retain, nonatomic) NSString *process;
@property (nonatomic) char hasState;
@property (nonatomic) char state;
@property (nonatomic) char hasStateEnum;
@property (nonatomic) unsigned int stateEnum;

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
