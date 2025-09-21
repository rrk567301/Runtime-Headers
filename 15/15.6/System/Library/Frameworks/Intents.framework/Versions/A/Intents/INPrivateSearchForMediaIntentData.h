@class NSString, NSArray, NSData, NSNumber, INPrivateMediaIntentData;

@interface INPrivateSearchForMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) INPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, copy) NSArray *audioSearchResults;
@property (readonly, copy) NSArray *internalSignals;
@property (readonly, copy) NSNumber *appInferred;
@property (readonly, copy) NSData *pegasusMetaData;
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
- (id)initWithAudioSearchResults:(id)a0;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1 internalSignals:(id)a2;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1 internalSignals:(id)a2 appInferred:(id)a3;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1 internalSignals:(id)a2 appInferred:(id)a3 pegasusMetaData:(id)a4;

@end
