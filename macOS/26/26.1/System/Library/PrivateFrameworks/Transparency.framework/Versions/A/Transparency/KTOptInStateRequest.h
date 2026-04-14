@class NSString;

@interface KTOptInStateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL fetchCloudKit;
@property BOOL sync;
@property (retain) NSString *application;
@property (retain) NSString *uri;

- (id)initWithApplication:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
