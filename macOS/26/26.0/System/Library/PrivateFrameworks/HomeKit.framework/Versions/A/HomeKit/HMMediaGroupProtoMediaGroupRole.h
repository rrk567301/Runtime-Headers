@class HMMediaGroupProtoMediaSystemRoles;

@interface HMMediaGroupProtoMediaGroupRole : PBCodable <NSCopying> {
    struct { unsigned char role : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMediaSystem;
@property (retain, nonatomic) HMMediaGroupProtoMediaSystemRoles *mediaSystem;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (void)clearOneofValuesForRole;

@end
