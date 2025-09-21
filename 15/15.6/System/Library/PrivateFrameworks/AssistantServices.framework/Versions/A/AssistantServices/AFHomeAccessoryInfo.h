@class NSUUID, NSString;

@interface AFHomeAccessoryInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *loggingUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSString *assistantIdentifier;
@property (readonly, nonatomic) char isSpeaker;
@property (readonly, nonatomic) char hasActiveThirdPartyMusicSubscription;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *categoryType;
@property (readonly, nonatomic) long long schemaCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)buildDictionaryRepresentation;
- (id)initWithUniqueIdentifier:(id)a0 loggingUniqueIdentifier:(id)a1 name:(id)a2 model:(id)a3 roomName:(id)a4 assistantIdentifier:(id)a5 isSpeaker:(char)a6 hasActiveThirdPartyMusicSubscription:(char)a7 manufacturer:(id)a8 categoryType:(id)a9 schemaCategoryType:(long long)a10;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
