@class NSString;

@interface TUContinuityCallInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *callIdentifier;
@property (readonly, nonatomic) NSString *callerIdSubstring;
@property (readonly, nonatomic) NSString *displayName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCallIdentifier:(id)a0 callerIdSubstring:(id)a1 displayName:(id)a2;

@end
