@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {
    struct { unsigned char number : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasDesc;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) int number;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
