@class NSArray, _INPBAlarmSearch, NSString, _INPBIntentMetadata;

@interface _INPBChangeAlarmStatusIntent : PBCodable <_INPBChangeAlarmStatusIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char operation : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBAlarmSearch *alarmSearch;
@property (readonly, nonatomic) char hasAlarmSearch;
@property (copy, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) unsigned long long alarmsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int operation;
@property (nonatomic) char hasOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)alarmsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAlarms:(id)a0;
- (int)StringAsOperation:(id)a0;
- (id)alarmsAtIndex:(unsigned long long)a0;
- (void)clearAlarms;
- (id)operationAsString:(int)a0;

@end
