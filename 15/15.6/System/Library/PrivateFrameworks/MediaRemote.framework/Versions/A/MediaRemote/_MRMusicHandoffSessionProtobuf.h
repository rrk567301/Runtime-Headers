@class NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRMusicHandoffSessionProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasSourcePlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *sourcePlayerPath;
@property (readonly, nonatomic) char hasDestinationPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *destinationPlayerPath;

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
