@class _MRNowPlayingPlayerPathProtobuf, NSString, _MRErrorProtobuf, NSMutableArray;

@interface _MRSendCommandResultProtobuf : PBCodable <NSCopying> {
    struct { unsigned char sendError : 1; } _has;
}

@property (readonly, nonatomic) char hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) char hasSendError;
@property (nonatomic) int sendError;
@property (retain, nonatomic) NSMutableArray *statuses;
@property (readonly, nonatomic) char hasSendErrorDescription;
@property (retain, nonatomic) NSString *sendErrorDescription;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) _MRErrorProtobuf *error;

+ (Class)statusesType;

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
- (int)StringAsSendError:(id)a0;
- (void)addStatuses:(id)a0;
- (void)clearStatuses;
- (id)sendErrorAsString:(int)a0;
- (id)statusesAtIndex:(unsigned long long)a0;
- (unsigned long long)statusesCount;

@end
