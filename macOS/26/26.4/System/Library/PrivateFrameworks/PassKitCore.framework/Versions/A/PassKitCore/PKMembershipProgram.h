@class NSString;

@interface PKMembershipProgram : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *programName;
@property (readonly, copy, nonatomic) NSString *memberStatus;
@property (readonly, copy, nonatomic) NSString *memberNumber;

+ (id)_programFromDeprecatedSemantics:(id)a0;
+ (id)programsFromSemantics:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithProgramName:(id)a0 memberStatus:(id)a1 memberNumber:(id)a2;

@end
