@class NSString, NSData, NSMutableArray;

@interface HKHealthWrapCodablePayloadHeader : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; } _has;
}

@property (readonly, nonatomic) char hasChannel;
@property (retain, nonatomic) NSString *channel;
@property (readonly, nonatomic) char hasPayloadType;
@property (retain, nonatomic) NSString *payloadType;
@property (readonly, nonatomic) char hasSubjectUUID;
@property (retain, nonatomic) NSData *subjectUUID;
@property (nonatomic) char hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) char hasEndDate;
@property (nonatomic) long long endDate;
@property (readonly, nonatomic) char hasPayloadIdentifier;
@property (retain, nonatomic) NSString *payloadIdentifier;
@property (readonly, nonatomic) char hasApplicationData;
@property (retain, nonatomic) NSData *applicationData;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;

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
- (void)addKeyValuePairs:(id)a0;
- (void)clearKeyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (unsigned long long)keyValuePairsCount;

@end
