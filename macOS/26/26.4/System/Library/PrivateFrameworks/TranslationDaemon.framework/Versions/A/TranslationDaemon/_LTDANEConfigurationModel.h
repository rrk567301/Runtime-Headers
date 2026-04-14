@class NSDictionary, NSString;

@interface _LTDANEConfigurationModel : NSObject

@property (retain, nonatomic) NSDictionary *root;
@property (retain, nonatomic) NSDictionary *capabilities;
@property (readonly, nonatomic) NSString *config;

- (id)debugDescription;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (long long)capabilityForSubType:(id)a0;
- (id)subTypes;

@end
