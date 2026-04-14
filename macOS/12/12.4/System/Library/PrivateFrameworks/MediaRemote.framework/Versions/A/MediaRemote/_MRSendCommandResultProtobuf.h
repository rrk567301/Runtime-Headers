@class NSString, _MRNowPlayingPlayerPathProtobuf, NSMutableArray;

@interface _MRSendCommandResultProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    int _sendError;
    NSString *_sendErrorDescription;
    NSMutableArray *_statuses;
    struct { unsigned char sendError : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
