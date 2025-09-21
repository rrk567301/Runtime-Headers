@class NSString;

@interface RMModelStatusBase : RMModelPayloadBase

@property (class, readonly, copy) NSString *statusItemType;

@property (readonly) char isArrayValue;

+ (char)isSupportedStatusItem:(id)a0 platform:(long long)a1 scope:(long long)a2;
+ (id)stubObjectForStatusItemType:(id)a0;

- (char)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (char)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
