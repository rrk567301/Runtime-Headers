@class NSString;

@interface ATXPBPersonaSessionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char starting : 1; } _has;
}

@property (readonly, nonatomic) char hasPersonaUID;
@property (retain, nonatomic) NSString *personaUID;
@property (nonatomic) char hasStarting;
@property (nonatomic) char starting;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;

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

@end
