@class NSString;

@interface _INPBContactHandle : PBCodable <_INPBContactHandle, NSSecureCoding, NSCopying> {
    struct { unsigned char emergencyType : 1; unsigned char faceTimeType : 1; unsigned char suggested : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int emergencyType;
@property (nonatomic) char hasEmergencyType;
@property (nonatomic) int faceTimeType;
@property (nonatomic) char hasFaceTimeType;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) char hasLabel;
@property (nonatomic) char suggested;
@property (nonatomic) char hasSuggested;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (copy, nonatomic) NSString *value;
@property (readonly, nonatomic) char hasValue;
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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsFaceTimeType:(id)a0;
- (int)StringAsEmergencyType:(id)a0;
- (id)emergencyTypeAsString:(int)a0;
- (id)faceTimeTypeAsString:(int)a0;

@end
