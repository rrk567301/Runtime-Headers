@class NSString, HAPCharacteristicValueTransitionFetch, HAPCharacteristicValueTransitionStart;

@interface HAPCharacteristicValueTransitionControl : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPCharacteristicValueTransitionFetch *transitionFetch;
@property (retain, nonatomic) HAPCharacteristicValueTransitionStart *transitionStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serializeWithError:(id *)a0;
- (id)initWithTransitionFetch:(id)a0 transitionStart:(id)a1;

@end
