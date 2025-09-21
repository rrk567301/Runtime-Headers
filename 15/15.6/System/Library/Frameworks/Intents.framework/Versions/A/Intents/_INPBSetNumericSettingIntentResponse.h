@class NSString, _INPBNumericSettingValue;

@interface _INPBSetNumericSettingIntentResponse : PBCodable <_INPBSetNumericSettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) char hasErrorDetail;
@property (retain, nonatomic) _INPBNumericSettingValue *maxValue;
@property (readonly, nonatomic) char hasMaxValue;
@property (retain, nonatomic) _INPBNumericSettingValue *minValue;
@property (readonly, nonatomic) char hasMinValue;
@property (retain, nonatomic) _INPBNumericSettingValue *oldValue;
@property (readonly, nonatomic) char hasOldValue;
@property (retain, nonatomic) _INPBNumericSettingValue *updatedValue;
@property (readonly, nonatomic) char hasUpdatedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
