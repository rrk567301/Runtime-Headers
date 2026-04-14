@class NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface _MRUpdateContentItemMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contentItems;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (Class)contentItemsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearContentItems;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)contentItemsCount;
- (void).cxx_destruct;
- (void)addContentItems:(id)a0;
- (id)contentItemsAtIndex:(unsigned long long)a0;

@end
