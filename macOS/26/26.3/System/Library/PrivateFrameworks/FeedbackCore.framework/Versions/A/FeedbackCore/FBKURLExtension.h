@class NSString, NSDictionary;

@interface FBKURLExtension : NSObject

@property (retain, nonatomic) NSString *extensionIdentifier;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSString *name;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithExtensionIdentifier:(id)a0 parameters:(id)a1;

@end
