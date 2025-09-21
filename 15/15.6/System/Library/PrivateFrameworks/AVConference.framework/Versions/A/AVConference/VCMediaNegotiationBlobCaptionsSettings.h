@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying> {
    struct { unsigned char senderLanguages : 1; unsigned char canDisplayCaptions : 1; } _has;
}

@property (nonatomic) char hasCanDisplayCaptions;
@property (nonatomic) char canDisplayCaptions;
@property (nonatomic) char hasSenderLanguages;
@property (nonatomic) unsigned int senderLanguages;

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
