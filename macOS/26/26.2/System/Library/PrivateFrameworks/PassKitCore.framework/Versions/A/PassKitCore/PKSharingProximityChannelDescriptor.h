@class NSString;

@interface PKSharingProximityChannelDescriptor : PKSharingChannelDescriptor

@property (readonly, nonatomic) unsigned long long group;
@property (readonly, nonatomic) NSString *sessionIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)createSetupAssistantDescriptor;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 group:(unsigned long long)a1;

@end
