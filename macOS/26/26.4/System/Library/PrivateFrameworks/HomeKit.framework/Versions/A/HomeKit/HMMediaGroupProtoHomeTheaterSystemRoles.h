@class NSString;

@interface HMMediaGroupProtoHomeTheaterSystemRoles : PBCodable <NSCopying> {
    struct { unsigned char audioDestinationType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAudioDestinationIdentifier;
@property (retain, nonatomic) NSString *audioDestinationIdentifier;
@property (nonatomic) BOOL hasAudioDestinationType;
@property (nonatomic) int audioDestinationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
