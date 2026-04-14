@interface BCLinkPresentationPropertiesProvider : NSObject

+ (id)presentationPropertiesForMessage:(id)a0;
+ (id)presentationPropertiesForMessage:(id)a0 andApplePayStatus:(long long)a1;
+ (id)presentationPropertiesForAuthenticationMessage:(id)a0;
+ (id)presentationPropertiesForMessage:(id)a0 andInternalAuthenticationManager:(id)a1;
+ (id)presentationPropertiesForUnknownMessage:(id)a0;

@end
