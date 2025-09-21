@class NSString;

@interface INSticker : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *avatarDescriptor;
@property (readonly, copy) NSString *appBundleID;
@property (readonly, copy) NSString *stickerDescription;
@property (readonly) long long type;
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
- (id)initWithType:(long long)a0 avatarDescriptor:(id)a1 appBundleID:(id)a2 stickerDescription:(id)a3 emoji:(id)a4;
- (id)initWithType:(long long)a0 emoji:(id)a1;

@end
