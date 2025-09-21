@class NSString;

@interface PPM2NamedEntityDonationError : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char source : 1; } _has;
}

@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) char hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;

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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;

@end
