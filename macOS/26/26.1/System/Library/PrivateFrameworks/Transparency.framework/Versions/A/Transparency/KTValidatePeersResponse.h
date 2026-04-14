@class NSString, NSDictionary;

@interface KTValidatePeersResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *application;
@property (retain) NSDictionary *results;
@property (retain) NSString *traceUUID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplication:(id)a0 results:(id)a1;

@end
