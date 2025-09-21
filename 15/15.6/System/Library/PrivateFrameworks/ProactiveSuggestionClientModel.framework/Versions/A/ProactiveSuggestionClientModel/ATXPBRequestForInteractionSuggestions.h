@class NSString, NSData;

@interface ATXPBRequestForInteractionSuggestions : PBCodable <NSCopying> {
    struct { unsigned char timeout : 1; } _has;
}

@property (readonly, nonatomic) char hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) char hasOriginatorId;
@property (retain, nonatomic) NSString *originatorId;
@property (readonly, nonatomic) char hasConsumerSubTypeString;
@property (retain, nonatomic) NSString *consumerSubTypeString;
@property (readonly, nonatomic) char hasPsPredictionContext;
@property (retain, nonatomic) NSData *psPredictionContext;
@property (nonatomic) char hasTimeout;
@property (nonatomic) double timeout;

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
