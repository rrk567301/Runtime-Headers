@class NSString;

@interface _MRAudioRouteProtobuf : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char spatializationEnabled : 1; unsigned char supportsSpatialization : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasSupportsSpatialization;
@property (nonatomic) char supportsSpatialization;
@property (nonatomic) char hasSpatializationEnabled;
@property (nonatomic) char spatializationEnabled;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
