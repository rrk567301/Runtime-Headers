@class NSString, _MRNowPlayingPlayerPathProtobuf, _MRDictionaryProtobuf;

@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char isPreflight : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasDestinationPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *destinationPlayerPath;
@property (readonly, nonatomic) BOOL hasDestinationCommandInfo;
@property (retain, nonatomic) _MRDictionaryProtobuf *destinationCommandInfo;
@property (nonatomic) BOOL hasIsPreflight;
@property (nonatomic) BOOL isPreflight;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
