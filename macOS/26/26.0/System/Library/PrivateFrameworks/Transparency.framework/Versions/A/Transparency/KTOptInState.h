@class NSString, NSDate;

@interface KTOptInState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long state;
@property BOOL everOptIn;
@property (retain) NSString *uri;
@property (retain) NSString *application;
@property (retain) NSDate *smtTimestamp;
@property (retain) NSString *osVersion;
@property (retain) NSString *serialNumber;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)jsonDescription;
- (void).cxx_destruct;
- (id)initWithApplication:(id)a0;
- (id)initWithApplication:(id)a0 optIn:(unsigned long long)a1;
- (id)initWithURI:(id)a0 application:(id)a1;

@end
