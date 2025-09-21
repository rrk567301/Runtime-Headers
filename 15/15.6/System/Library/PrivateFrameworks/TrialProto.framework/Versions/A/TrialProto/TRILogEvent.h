@class NSString, TRILogContext, TRIDenormalizedEvent;

@interface TRILogEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) TRILogContext *context;
@property (readonly, nonatomic) char hasLogEventId;
@property (retain, nonatomic) NSString *logEventId;
@property (readonly, nonatomic) char hasDenormalizedEvent;
@property (retain, nonatomic) TRIDenormalizedEvent *denormalizedEvent;

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

@end
