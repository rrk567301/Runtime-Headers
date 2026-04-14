@class NSString;

@interface NPKProtoPassAssociatedDataRequest : PBRequest <NSCopying> {
    struct { unsigned char passRequestedData : 1; } _has;
}

@property (retain, nonatomic) NSString *passUniqueID;
@property (nonatomic) BOOL hasPassRequestedData;
@property (nonatomic) unsigned long long passRequestedData;

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

@end
