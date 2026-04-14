@class NSString, TRILogContext, TRIDenormalizedEvent;

@interface TRILogEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) TRILogContext *context;
@property (readonly, nonatomic) BOOL hasLogEventId;
@property (retain, nonatomic) NSString *logEventId;
@property (readonly, nonatomic) BOOL hasDenormalizedEvent;
@property (retain, nonatomic) TRIDenormalizedEvent *denormalizedEvent;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
