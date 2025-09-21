@class NSString, NSMutableDictionary, NSArray, INImage;

@interface INObject : NSObject <INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *_valueForKeyDictionary;
@property (copy) NSString *descriptionString;
@property (readonly) NSString *identifier;
@property (readonly, copy) NSString *displayString;
@property (readonly) NSString *pronunciationHint;
@property (copy) NSString *subtitleString;
@property (retain) INImage *displayImage;
@property (retain) NSArray *alternativeSpeakableMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *spokenPhrase;
@property (readonly) NSString *vocabularyIdentifier;

+ (char)resolveInstanceMethod:(SEL)a0;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)valueForProperty:(id)a0;
- (id)_dictionaryRepresentation;
- (char)setValue:(id)a0 forProperty:(id)a1;
- (void)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;
- (id)_intents_displayImageWithLocalizer:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)_intents_localizedCopyWithLocalizer:(id)a0;
- (id)_intents_readableSubtitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2 subtitleString:(id)a3 displayImage:(id)a4;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 subtitleString:(id)a2 displayImage:(id)a3;

@end
