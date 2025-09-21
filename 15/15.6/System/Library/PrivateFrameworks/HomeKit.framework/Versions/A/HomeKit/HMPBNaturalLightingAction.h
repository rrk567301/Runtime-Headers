@class NSData;

@interface HMPBNaturalLightingAction : PBCodable <NSCopying> {
    struct { unsigned char naturalLightingEnabled : 1; } _has;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) char hasNaturalLightingEnabled;
@property (nonatomic) char naturalLightingEnabled;
@property (readonly, nonatomic) char hasLightProfileUUID;
@property (retain, nonatomic) NSData *lightProfileUUID;

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
