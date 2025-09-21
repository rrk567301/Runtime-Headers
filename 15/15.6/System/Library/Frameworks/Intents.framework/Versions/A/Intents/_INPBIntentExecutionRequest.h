@class NSString, _INPBAppIdentifier;

@interface _INPBIntentExecutionRequest : PBCodable <_INPBIntentExecutionRequest, NSSecureCoding, NSCopying> {
    struct { unsigned char encodingFormat : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBAppIdentifier *appIdentifier;
@property (readonly, nonatomic) char hasAppIdentifier;
@property (copy, nonatomic) NSString *encodedIntent;
@property (readonly, nonatomic) char hasEncodedIntent;
@property (copy, nonatomic) NSString *encodedIntentDefinition;
@property (readonly, nonatomic) char hasEncodedIntentDefinition;
@property (nonatomic) int encodingFormat;
@property (nonatomic) char hasEncodingFormat;
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
- (int)StringAsEncodingFormat:(id)a0;
- (id)encodingFormatAsString:(int)a0;

@end
