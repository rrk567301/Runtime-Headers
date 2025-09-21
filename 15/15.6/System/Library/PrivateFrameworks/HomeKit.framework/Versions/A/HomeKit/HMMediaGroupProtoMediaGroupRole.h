@class HMMediaGroupProtoMediaSystemRoles;

@interface HMMediaGroupProtoMediaGroupRole : PBCodable <NSCopying> {
    struct { unsigned char role : 1; } _has;
}

@property (readonly, nonatomic) char hasMediaSystem;
@property (retain, nonatomic) HMMediaGroupProtoMediaSystemRoles *mediaSystem;
@property (nonatomic) char hasRole;
@property (nonatomic) int role;

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
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (void)clearOneofValuesForRole;

@end
