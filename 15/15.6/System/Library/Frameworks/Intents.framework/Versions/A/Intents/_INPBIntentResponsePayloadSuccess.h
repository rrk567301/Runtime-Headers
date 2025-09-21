@class NSData, NSString;

@interface _INPBIntentResponsePayloadSuccess : PBCodable <_INPBIntentResponsePayloadSuccess, NSSecureCoding, NSCopying> {
    struct { unsigned char shouldOpenContainingApplication : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *responseMessageData;
@property (readonly, nonatomic) char hasResponseMessageData;
@property (copy, nonatomic) NSString *responseTypeName;
@property (readonly, nonatomic) char hasResponseTypeName;
@property (nonatomic) char shouldOpenContainingApplication;
@property (nonatomic) char hasShouldOpenContainingApplication;
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
