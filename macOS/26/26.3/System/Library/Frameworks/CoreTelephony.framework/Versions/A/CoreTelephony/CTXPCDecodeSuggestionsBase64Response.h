@class CTLazuliDeepLinkBase64StringDecoded;

@interface CTXPCDecodeSuggestionsBase64Response : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliDeepLinkBase64StringDecoded *decodedPayload;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithDecodedPayload:(id)a0;

@end
