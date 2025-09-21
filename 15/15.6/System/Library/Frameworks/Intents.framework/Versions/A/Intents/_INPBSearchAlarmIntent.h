@class NSArray, _INPBAlarmSearch, NSString, _INPBIntentMetadata;

@interface _INPBSearchAlarmIntent : PBCodable <_INPBSearchAlarmIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char alarmSearchType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBAlarmSearch *alarmSearch;
@property (readonly, nonatomic) char hasAlarmSearch;
@property (nonatomic) int alarmSearchType;
@property (nonatomic) char hasAlarmSearchType;
@property (copy, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) unsigned long long alarmsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
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
- (int)StringAsAlarmSearchType:(id)a0;
- (id)alarmSearchTypeAsString:(int)a0;
- (id)alarmsAtIndex:(unsigned long long)a0;
- (void)clearAlarms;

@end
