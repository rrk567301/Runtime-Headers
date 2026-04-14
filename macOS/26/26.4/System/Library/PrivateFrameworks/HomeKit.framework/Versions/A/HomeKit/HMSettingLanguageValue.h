@class NSString;

@interface HMSettingLanguageValue : HMImmutableSettingValue <NSCopying>

@property (readonly, copy) NSString *inputLanguageCode;
@property (readonly, copy) NSString *outputVoiceLanguageCode;
@property (readonly, copy) NSString *outputVoiceGenderCode;
@property (readonly, copy) NSString *voiceName;

- (id)initWithPayload:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithInputLanguageCode:(id)a0 outputVoiceLanguageCode:(id)a1 outputVoiceGenderCode:(id)a2;
- (id)initWithInputLanguageCode:(id)a0 outputVoiceLanguageCode:(id)a1 outputVoiceGenderCode:(id)a2 voiceName:(id)a3;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
