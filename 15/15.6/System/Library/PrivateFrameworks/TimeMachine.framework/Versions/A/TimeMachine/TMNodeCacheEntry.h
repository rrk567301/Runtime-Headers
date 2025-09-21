@interface TMNodeCacheEntry : PBCodable <NSCopying> {
    struct { unsigned char destinationFileID : 1; unsigned char sourceFileID : 1; } _has;
}

@property (nonatomic) char hasSourceFileID;
@property (nonatomic) unsigned long long sourceFileID;
@property (nonatomic) char hasDestinationFileID;
@property (nonatomic) unsigned long long destinationFileID;
@property (nonatomic) unsigned int flags;

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
