@class INSleepAlarmAttribute, NSString, NSDateComponents, INSpeakableString, NSNumber;

@interface INAlarm : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSDateComponents *dateTime;
@property (readonly, copy) INSpeakableString *label;
@property (readonly, copy) NSNumber *enabled;
@property (readonly, copy) NSNumber *firing;
@property (readonly) unsigned long long alarmRepeatScheduleOptions;
@property (readonly, copy) INSleepAlarmAttribute *sleepAlarmAttribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithIdentifier:(id)a0 dateTime:(id)a1 label:(id)a2 enabled:(id)a3 firing:(id)a4 alarmRepeatScheduleOptions:(unsigned long long)a5 sleepAlarmAttribute:(id)a6;

@end
