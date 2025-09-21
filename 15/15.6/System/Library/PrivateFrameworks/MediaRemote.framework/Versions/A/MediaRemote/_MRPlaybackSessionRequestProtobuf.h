@class NSString, _MRNowPlayingPlayerPathProtobuf, _MRDictionaryProtobuf;

@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasDestinationPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *destinationPlayerPath;
@property (readonly, nonatomic) char hasDestinationCommandInfo;
@property (retain, nonatomic) _MRDictionaryProtobuf *destinationCommandInfo;

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
