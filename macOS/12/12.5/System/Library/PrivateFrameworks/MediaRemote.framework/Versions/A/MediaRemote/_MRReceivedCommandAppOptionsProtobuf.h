@interface _MRReceivedCommandAppOptionsProtobuf : PBCodable <NSCopying> {
    BOOL _launchApplication;
    struct { unsigned char launchApplication : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
