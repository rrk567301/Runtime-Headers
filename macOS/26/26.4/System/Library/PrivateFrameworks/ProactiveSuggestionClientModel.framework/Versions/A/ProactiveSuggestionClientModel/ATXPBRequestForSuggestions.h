@class NSString;

@interface ATXPBRequestForSuggestions : PBCodable <NSCopying> {
    struct { unsigned char timeout : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL hasOriginatorId;
@property (retain, nonatomic) NSString *originatorId;
@property (readonly, nonatomic) BOOL hasConsumerSubTypeString;
@property (retain, nonatomic) NSString *consumerSubTypeString;
@property (nonatomic) BOOL hasTimeout;
@property (nonatomic) double timeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
