@class NSData, NSNumber, NSDictionary;

@interface KTNetworkResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *request;
@property (retain) NSData *response;
@property (retain) NSNumber *responseStatus;
@property (retain) NSDictionary *metadata;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serverHint;
- (id)traceUUID;

@end
