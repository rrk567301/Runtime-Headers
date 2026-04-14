@class NSDictionary, NSString;

@interface CorrectionsProfilesPersistedState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *correctionsProfiles;
@property (copy, nonatomic) NSString *digest;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
