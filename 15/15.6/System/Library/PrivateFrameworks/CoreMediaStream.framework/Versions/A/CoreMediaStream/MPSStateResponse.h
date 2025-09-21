@interface MPSStateResponse : PBCodable <NSCopying> {
    struct { unsigned char retryAfterSeconds : 1; unsigned char version : 1; unsigned char icplAction : 1; unsigned char mpsAction : 1; } _has;
}

@property (nonatomic) char hasRetryAfterSeconds;
@property (nonatomic) long long retryAfterSeconds;
@property (nonatomic) char hasMpsAction;
@property (nonatomic) int mpsAction;
@property (nonatomic) char hasIcplAction;
@property (nonatomic) int icplAction;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsIcplAction:(id)a0;
- (int)StringAsMpsAction:(id)a0;
- (id)icplActionAsString:(int)a0;
- (id)mpsActionAsString:(int)a0;

@end
