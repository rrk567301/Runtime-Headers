@class _MRErrorProtobuf, NSString, NSError, _MRDictionaryProtobuf, NSMutableArray;

@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying> {
    struct { unsigned char endTimestamp : 1; unsigned char errorCode : 1; unsigned char startTimestamp : 1; unsigned char identifier : 1; unsigned char role : 1; } _has;
}

@property (readonly, nonatomic) NSError *mr_error;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) BOOL hasEndTimestamp;
@property (nonatomic) double endTimestamp;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) _MRErrorProtobuf *error;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;
@property (readonly, nonatomic) BOOL hasInput;
@property (retain, nonatomic) _MRDictionaryProtobuf *input;
@property (readonly, nonatomic) BOOL hasOutput;
@property (retain, nonatomic) _MRDictionaryProtobuf *output;
@property (retain, nonatomic) NSMutableArray *events;

+ (Class)eventsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;
- (double)calculatedDuration;
- (id)reportName;

@end
