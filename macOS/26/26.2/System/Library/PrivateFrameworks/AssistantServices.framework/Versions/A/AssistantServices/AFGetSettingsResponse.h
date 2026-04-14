@class NSArray;

@interface AFGetSettingsResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *settings;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
