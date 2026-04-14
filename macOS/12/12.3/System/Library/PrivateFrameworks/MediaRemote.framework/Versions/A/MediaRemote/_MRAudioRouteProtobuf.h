@class NSString;

@interface _MRAudioRouteProtobuf : PBCodable <NSCopying> {
    NSString *_name;
    int _type;
    BOOL _spatializationEnabled;
    BOOL _supportsSpatialization;
    struct { unsigned char type : 1; unsigned char spatializationEnabled : 1; unsigned char supportsSpatialization : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
