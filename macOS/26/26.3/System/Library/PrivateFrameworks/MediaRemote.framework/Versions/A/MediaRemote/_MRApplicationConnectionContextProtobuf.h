@class NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRApplicationConnectionContextProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasDestinationPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *destinationPlayerPath;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
