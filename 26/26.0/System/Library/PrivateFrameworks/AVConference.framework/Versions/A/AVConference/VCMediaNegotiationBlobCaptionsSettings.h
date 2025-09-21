@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying> {
    struct { unsigned char senderLanguages : 1; unsigned char canDisplayCaptions : 1; } _has;
}

@property (nonatomic) BOOL hasCanDisplayCaptions;
@property (nonatomic) BOOL canDisplayCaptions;
@property (nonatomic) BOOL hasSenderLanguages;
@property (nonatomic) unsigned int senderLanguages;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
