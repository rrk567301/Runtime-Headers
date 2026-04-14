@class NSString;

@interface TransparencyApplication : NSObject

@property (retain) NSString *applicationIdentifier;

+ (id)applicationPrefixForIdentifier:(id)a0;
+ (id)addApplicationPrefixForIdentifier:(id)a0 uri:(id)a1;
+ (id)applicationIdentifierForValue:(id)a0;
+ (id)applicationValueForIdentifier:(id)a0;
+ (id)stripApplicationPrefixForIdentifier:(id)a0 uri:(id)a1;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
