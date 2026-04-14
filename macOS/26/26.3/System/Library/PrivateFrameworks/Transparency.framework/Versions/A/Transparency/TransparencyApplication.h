@class NSString;

@interface TransparencyApplication : NSObject

@property (retain) NSString *applicationIdentifier;

+ (id)applicationIdentifierForValue:(id)a0;
+ (id)idsServiceForIdentifier:(id)a0;
+ (id)applicationPrefixForIdentifier:(id)a0;
+ (id)applicationValueForIdentifier:(id)a0;
+ (id)stripApplicationPrefixForIdentifier:(id)a0 uri:(id)a1;
+ (id)addApplicationPrefixForIdentifier:(id)a0 uri:(id)a1;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
