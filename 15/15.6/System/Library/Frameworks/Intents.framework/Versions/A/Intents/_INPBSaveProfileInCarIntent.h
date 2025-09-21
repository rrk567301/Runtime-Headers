@class NSString, _INPBInteger, _INPBString, _INPBIntentMetadata;

@interface _INPBSaveProfileInCarIntent : PBCodable <_INPBSaveProfileInCarIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBString *profileName;
@property (readonly, nonatomic) char hasProfileName;
@property (retain, nonatomic) _INPBInteger *profileNumber;
@property (readonly, nonatomic) char hasProfileNumber;
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
