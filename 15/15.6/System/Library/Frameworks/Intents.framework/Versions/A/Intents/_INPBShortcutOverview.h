@class NSArray, NSString, _INPBDataString, _INPBImageValue;

@interface _INPBShortcutOverview : PBCodable <_INPBShortcutOverview, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *descriptiveText;
@property (readonly, nonatomic) char hasDescriptiveText;
@property (retain, nonatomic) _INPBImageValue *icon;
@property (readonly, nonatomic) char hasIcon;
@property (retain, nonatomic) _INPBDataString *name;
@property (readonly, nonatomic) char hasName;
@property (copy, nonatomic) NSArray *steps;
@property (readonly, nonatomic) unsigned long long stepsCount;
@property (retain, nonatomic) _INPBDataString *voiceCommand;
@property (readonly, nonatomic) char hasVoiceCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stepsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSteps:(id)a0;
- (void)clearSteps;
- (id)stepsAtIndex:(unsigned long long)a0;

@end
