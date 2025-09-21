@class NSString, WDProtocolType;

@interface WDProtocolParameter : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WDProtocolType *type;
@property (readonly, nonatomic, getter=isOptional) char optional;
@property (readonly, nonatomic, getter=isArray) char array;

+ (id)parameterFromPayload:(id)a0 usingTypeDictionary:(id)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToParameter:(id)a0;
- (id)decodedInstanceFromPayload:(id)a0;
- (struct Ref<WTF::JSONImpl::Value, WTF::RawPtrTraits<WTF::JSONImpl::Value>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Value>> { struct Value *x0; })encodedValueForInstance:(id)a0;
- (id)initWithName:(id)a0 type:(id)a1 isOptional:(char)a2 isArray:(char)a3;
- (char)instanceIsValid:(id)a0;

@end
