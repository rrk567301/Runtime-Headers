@class NSArray, NSString;

@interface _INPBSearchCallHistoryIntentResponse : PBCodable <_INPBSearchCallHistoryIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *callRecords;
@property (readonly, nonatomic) unsigned long long callRecordsCount;
@property (copy, nonatomic) NSString *dateCreated;
@property (readonly, nonatomic) char hasDateCreated;
@property (copy, nonatomic) NSString *status;
@property (readonly, nonatomic) char hasStatus;
@property (copy, nonatomic) NSString *targetContact;
@property (readonly, nonatomic) char hasTargetContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)callRecordsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCallRecords:(id)a0;
- (id)callRecordsAtIndex:(unsigned long long)a0;
- (void)clearCallRecords;

@end
