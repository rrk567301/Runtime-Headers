@class NSDictionary, NSString;

@interface _LTDANEConfigurationModel : NSObject

@property (retain, nonatomic) NSDictionary *root;
@property (retain, nonatomic) NSDictionary *capabilities;
@property (readonly, nonatomic) NSString *config;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (long long)capabilityForSubType:(id)a0;
- (id)subTypes;

@end
