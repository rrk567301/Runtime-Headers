@class NSString, NSMutableArray, NSURL;

@interface CalDAVPrincipalResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *firstName;
@property (retain) NSString *lastName;
@property (retain) NSString *displayName;
@property (retain) NSString *resultType;
@property (retain) NSString *principalPath;
@property (readonly, retain) NSString *emailAddress;
@property (retain) NSMutableArray *emailAddresses;
@property (retain) NSMutableArray *cuAddresses;
@property (readonly, retain) NSString *preferredCUAddress;
@property (retain) NSURL *overrideBaseURL;

+ (id)resultFromResponse:(id)a0;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (void)addEmail:(id)a0;
- (void)addCUAddress:(id)a0;

@end
