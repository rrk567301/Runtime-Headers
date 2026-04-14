@class NSString, INSticker;

@interface INMessageReaction : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) INSticker *sticker;
@property (readonly) long long reactionType;
@property (readonly, copy) NSString *reactionDescription;
@property (readonly, copy) NSString *emoji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithReactionType:(long long)a0 reactionDescription:(id)a1 emoji:(id)a2;
- (id)initWithReactionType:(long long)a0 reactionDescription:(id)a1 emoji:(id)a2 sticker:(id)a3;

@end
