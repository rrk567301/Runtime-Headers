@class NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRMusicHandoffSessionProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasSourcePlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *sourcePlayerPath;
@property (readonly, nonatomic) BOOL hasDestinationPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *destinationPlayerPath;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
