@class NSString, NSArray, INSpeakableString, INImage;

@interface INShortcutOverview : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) INSpeakableString *name;
@property (readonly, copy) INSpeakableString *voiceCommand;
@property (readonly, copy) INImage *icon;
@property (readonly, copy) INSpeakableString *descriptiveText;
@property (readonly, copy) NSArray *steps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithName:(id)a0 voiceCommand:(id)a1 icon:(id)a2 descriptiveText:(id)a3 steps:(id)a4;

@end
