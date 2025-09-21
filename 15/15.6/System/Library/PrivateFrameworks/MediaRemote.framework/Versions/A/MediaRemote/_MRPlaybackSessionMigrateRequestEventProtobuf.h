@class NSError, NSString;

@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char endTimestamp : 1; unsigned char errorCode : 1; unsigned char startTimestamp : 1; } _has;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) char hasEndTimestamp;
@property (nonatomic) double endTimestamp;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
- (double)calculatedDuration;

@end
