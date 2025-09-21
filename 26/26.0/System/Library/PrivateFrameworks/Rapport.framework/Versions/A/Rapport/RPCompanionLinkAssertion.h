@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assertionID;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (copy, nonatomic) NSString *destinationID;
@property (copy, nonatomic) NSString *identifier;

- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
