@class NSString, NSData, NSMutableArray;

@interface HKHealthWrapCodablePayloadHeader : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasChannel;
@property (retain, nonatomic) NSString *channel;
@property (readonly, nonatomic) BOOL hasPayloadType;
@property (retain, nonatomic) NSString *payloadType;
@property (readonly, nonatomic) BOOL hasSubjectUUID;
@property (retain, nonatomic) NSData *subjectUUID;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;
@property (readonly, nonatomic) BOOL hasPayloadIdentifier;
@property (retain, nonatomic) NSString *payloadIdentifier;
@property (readonly, nonatomic) BOOL hasApplicationData;
@property (retain, nonatomic) NSData *applicationData;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;

- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addKeyValuePairs:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (unsigned long long)keyValuePairsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearKeyValuePairs;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
