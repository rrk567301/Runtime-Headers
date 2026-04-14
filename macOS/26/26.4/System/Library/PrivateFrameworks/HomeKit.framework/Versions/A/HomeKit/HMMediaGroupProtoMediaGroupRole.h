@class HMMediaGroupProtoMediaSystemRoles, HMMediaGroupProtoSurroundSystemRoles, HMMediaGroupProtoHomeTheaterSystemRoles;

@interface HMMediaGroupProtoMediaGroupRole : PBCodable <NSCopying> {
    struct { unsigned char role : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMediaSystem;
@property (retain, nonatomic) HMMediaGroupProtoMediaSystemRoles *mediaSystem;
@property (readonly, nonatomic) BOOL hasSurroundSystem;
@property (retain, nonatomic) HMMediaGroupProtoSurroundSystemRoles *surroundSystem;
@property (readonly, nonatomic) BOOL hasHomeTheaterSystem;
@property (retain, nonatomic) HMMediaGroupProtoHomeTheaterSystemRoles *homeTheaterSystem;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;

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
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (void)clearOneofValuesForRole;

@end
