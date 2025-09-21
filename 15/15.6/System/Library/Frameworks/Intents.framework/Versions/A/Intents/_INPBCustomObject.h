@class NSArray, _INPBImageValue, NSString;

@interface _INPBCustomObject : PBCodable <_INPBCustomObject, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *alternatives;
@property (readonly, nonatomic) unsigned long long alternativesCount;
@property (retain, nonatomic) _INPBImageValue *displayImage;
@property (readonly, nonatomic) char hasDisplayImage;
@property (copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) char hasDisplayString;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (readonly, nonatomic) char hasPronunciationHint;
@property (copy, nonatomic) NSString *subtitleString;
@property (readonly, nonatomic) char hasSubtitleString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)alternativeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)alternativeAtIndex:(unsigned long long)a0;
- (void)addAlternative:(id)a0;
- (void)clearAlternatives;

@end
