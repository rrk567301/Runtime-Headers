@class NSString;

@interface NPKProtoAssertionRequest : PBRequest <NSCopying> {
    struct { unsigned char assertionType : 1; unsigned char pending : 1; } _has;
}

@property (retain, nonatomic) NSString *requestUUIDString;
@property (nonatomic) BOOL hasAssertionType;
@property (nonatomic) int assertionType;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;

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
- (int)StringAsAssertionType:(id)a0;
- (id)assertionTypeAsString:(int)a0;

@end
