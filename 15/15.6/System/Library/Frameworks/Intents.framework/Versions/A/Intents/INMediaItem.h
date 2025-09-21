@class NSString, NSDictionary, INPrivateMediaItemValueData, INImage;

@interface INMediaItem : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) INImage *artwork;
@property (readonly, copy) NSDictionary *topics;
@property (readonly, copy) NSDictionary *namedEntities;
@property (readonly, copy) NSString *assetInfo;
@property (copy) INPrivateMediaItemValueData *privateMediaItemValueData;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *title;
@property (readonly) long long type;
@property (readonly, copy) NSString *artist;
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
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)spokenPhrase;
- (id)_dictionaryRepresentation;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 type:(long long)a2 artwork:(id)a3;
- (id)initWithIdentifier:(id)a0 title:(id)a1 type:(long long)a2 artwork:(id)a3 artist:(id)a4;
- (id)initWithIdentifier:(id)a0 title:(id)a1 type:(long long)a2 artwork:(id)a3 artist:(id)a4 topics:(id)a5 namedEntities:(id)a6;
- (id)initWithIdentifier:(id)a0 title:(id)a1 type:(long long)a2 artwork:(id)a3 artist:(id)a4 topics:(id)a5 namedEntities:(id)a6 assetInfo:(id)a7;
- (id)initWithIdentifier:(id)a0 title:(id)a1 type:(long long)a2 artwork:(id)a3 artist:(id)a4 topics:(id)a5 namedEntities:(id)a6 privateMediaItemValueData:(id)a7;

@end
