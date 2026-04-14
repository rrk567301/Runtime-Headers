@class NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface _MRUpdateContentItemArtworkMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contentItems;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (Class)contentItemsType;

- (unsigned long long)contentItemsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearContentItems;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addContentItems:(id)a0;
- (id)contentItemsAtIndex:(unsigned long long)a0;

@end
