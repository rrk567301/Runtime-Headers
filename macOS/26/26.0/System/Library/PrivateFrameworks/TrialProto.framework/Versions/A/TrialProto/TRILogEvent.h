@class NSString, TRILogContext, TRIDenormalizedEvent;

@interface TRILogEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) TRILogContext *context;
@property (readonly, nonatomic) BOOL hasLogEventId;
@property (retain, nonatomic) NSString *logEventId;
@property (readonly, nonatomic) BOOL hasDenormalizedEvent;
@property (retain, nonatomic) TRIDenormalizedEvent *denormalizedEvent;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
