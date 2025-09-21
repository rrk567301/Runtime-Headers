@class NSString;

@interface _INPBSetBinarySettingIntentResponse : PBCodable <_INPBSetBinarySettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char oldValue : 1; unsigned char updatedValue : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) char hasErrorDetail;
@property (nonatomic) int oldValue;
@property (nonatomic) char hasOldValue;
@property (nonatomic) int updatedValue;
@property (nonatomic) char hasUpdatedValue;
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
- (int)StringAsOldValue:(id)a0;
- (id)oldValueAsString:(int)a0;
- (int)StringAsUpdatedValue:(id)a0;
- (id)updatedValueAsString:(int)a0;

@end
