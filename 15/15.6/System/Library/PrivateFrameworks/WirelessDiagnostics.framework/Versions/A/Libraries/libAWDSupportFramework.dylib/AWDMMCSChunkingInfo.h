@class NSString, NSMutableArray;

@interface AWDMMCSChunkingInfo : PBCodable <NSCopying> {
    struct { unsigned char byteCount : 1; unsigned char chunkCount : 1; unsigned char duration : 1; unsigned char startTime : 1; unsigned char errorCode : 1; unsigned char cancelled : 1; } _has;
}

@property (nonatomic) char hasChunkCount;
@property (nonatomic) long long chunkCount;
@property (nonatomic) char hasByteCount;
@property (nonatomic) long long byteCount;
@property (nonatomic) char hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) char hasDuration;
@property (nonatomic) long long duration;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasCancelled;
@property (nonatomic) char cancelled;
@property (retain, nonatomic) NSMutableArray *chunkingErrors;

+ (Class)chunkingErrorType;

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
- (void)addChunkingError:(id)a0;
- (id)chunkingErrorAtIndex:(unsigned long long)a0;
- (unsigned long long)chunkingErrorsCount;
- (void)clearChunkingErrors;

@end
