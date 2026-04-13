@class NSError, NSString;

@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying> {
    double _duration;
    double _endTimestamp;
    long long _errorCode;
    double _startTimestamp;
    NSString *_errorDescription;
    NSString *_name;
    struct { unsigned char duration : 1; unsigned char endTimestamp : 1; unsigned char errorCode : 1; unsigned char startTimestamp : 1; } _has;
}

@property (readonly, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (double)calculatedDuration;

@end
