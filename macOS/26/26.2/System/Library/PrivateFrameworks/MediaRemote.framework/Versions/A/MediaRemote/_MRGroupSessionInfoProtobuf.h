@class NSString;

@interface _MRGroupSessionInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char placeholder : 1; } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *hostDisplayName;
@property (nonatomic) int routeType;
@property (nonatomic) BOOL hosted;
@property (readonly, nonatomic) BOOL hasEquivalentMediaIdentifier;
@property (retain, nonatomic) NSString *equivalentMediaIdentifier;
@property (nonatomic) BOOL hasPlaceholder;
@property (nonatomic) BOOL placeholder;

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
- (int)StringAsRouteType:(id)a0;
- (id)routeTypeAsString:(int)a0;

@end
