@class NSArray, NSDictionary, NSString, NSUUID;

@interface GTLaunchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *environment;
@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSString *deviceUDID;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) BOOL preferXPCService;
@property (nonatomic) BOOL disableDisplay;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
