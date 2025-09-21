@class NSString;

@interface ABCPbSummaryAttachmentRequest : PBRequest <NSCopying> {
    struct { unsigned char fileSize : 1; } _has;
}

@property (readonly, nonatomic) char hasFileName;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) char hasFileSize;
@property (nonatomic) unsigned int fileSize;

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

@end
