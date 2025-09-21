@class NSString;

@interface AWDIDSNoteMessageReceived : PBCodable <NSCopying> {
    struct { unsigned char localtimedelta : 1; unsigned char servertimestamp : 1; unsigned char timestamp : 1; unsigned char accountType : 1; unsigned char fromStorage : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasAccountType;
@property (nonatomic) int accountType;
@property (nonatomic) char hasFromStorage;
@property (nonatomic) char fromStorage;
@property (readonly, nonatomic) char hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) char hasServertimestamp;
@property (nonatomic) unsigned long long servertimestamp;
@property (nonatomic) char hasLocaltimedelta;
@property (nonatomic) unsigned long long localtimedelta;

- (void)dealloc;
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
