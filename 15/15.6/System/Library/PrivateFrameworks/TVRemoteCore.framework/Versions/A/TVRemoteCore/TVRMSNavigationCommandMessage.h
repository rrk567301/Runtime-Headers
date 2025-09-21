@interface TVRMSNavigationCommandMessage : PBCodable <NSCopying> {
    struct { unsigned char navigationCommand : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) char hasNavigationCommand;
@property (nonatomic) int navigationCommand;
@property (nonatomic) char hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
