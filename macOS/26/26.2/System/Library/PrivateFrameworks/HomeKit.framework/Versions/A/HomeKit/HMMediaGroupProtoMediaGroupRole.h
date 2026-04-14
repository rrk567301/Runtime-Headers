@class HMMediaGroupProtoMediaSystemRoles, HMMediaGroupProtoSurroundSystemRoles;

@interface HMMediaGroupProtoMediaGroupRole : PBCodable <NSCopying> {
    struct { unsigned char role : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMediaSystem;
@property (retain, nonatomic) HMMediaGroupProtoMediaSystemRoles *mediaSystem;
@property (readonly, nonatomic) BOOL hasSurroundSystem;
@property (retain, nonatomic) HMMediaGroupProtoSurroundSystemRoles *surroundSystem;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (void)clearOneofValuesForRole;

@end
