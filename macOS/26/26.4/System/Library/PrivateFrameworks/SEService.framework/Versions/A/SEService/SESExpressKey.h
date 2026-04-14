@class NSString, NSDictionary;

@interface SESExpressKey : NSObject

@property (readonly) NSString *keyIdentifier;
@property (readonly) NSString *appletIdentifier;
@property (readonly) NSDictionary *configuration;

+ (id)withKeyIdentifier:(id)a0 appletIdentifier:(id)a1 configuration:(id)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
