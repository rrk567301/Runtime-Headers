@class NSString;

@interface _MRGroupSessionInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char placeholder : 1; } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *hostDisplayName;
@property (nonatomic) int routeType;
@property (nonatomic) char hosted;
@property (readonly, nonatomic) char hasEquivalentMediaIdentifier;
@property (retain, nonatomic) NSString *equivalentMediaIdentifier;
@property (nonatomic) char hasPlaceholder;
@property (nonatomic) char placeholder;

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
- (int)StringAsRouteType:(id)a0;
- (id)routeTypeAsString:(int)a0;

@end
