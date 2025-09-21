@class NSArray;

@interface DMFFetchDeclarationCapabilitiesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSArray *supportedAssets;
@property (copy, nonatomic) NSArray *supportedConfigurations;
@property (copy, nonatomic) NSArray *supportedEvents;
@property (copy, nonatomic) NSArray *supportedActivations;
@property (copy, nonatomic) NSArray *supportedPredicates;
@property (copy, nonatomic) NSArray *supportedMessages;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
