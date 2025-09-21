@class NSString;

@interface AWDDEDExtensionCompleted : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char numbytes : 1; unsigned char numfiles : 1; unsigned char timestamp : 1; unsigned char error : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasExtension;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic) char hasNumfiles;
@property (nonatomic) unsigned long long numfiles;
@property (nonatomic) char hasNumbytes;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) char hasError;
@property (nonatomic) int error;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;

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
- (int)StringAsError:(id)a0;
- (id)errorAsString:(int)a0;

@end
