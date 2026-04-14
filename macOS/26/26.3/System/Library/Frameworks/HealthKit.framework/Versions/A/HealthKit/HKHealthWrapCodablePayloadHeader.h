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

- (id)dictionaryRepresentation;
- (void)addKeyValuePairs:(id)a0;
- (id)description;
- (void)clearKeyValuePairs;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)keyValuePairsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;

@end
