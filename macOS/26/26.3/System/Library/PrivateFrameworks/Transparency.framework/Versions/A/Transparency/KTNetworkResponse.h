@class NSString, NSDictionary, NSData, NSError, NSNumber, NSDate;

@interface KTNetworkResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *requestUUID;
@property (retain) NSString *uri;
@property (retain) NSData *request;
@property int type;
@property (retain) NSData *response;
@property (retain) NSError *error;
@property (retain) NSNumber *responseStatus;
@property (retain) NSDictionary *metadata;
@property (retain) NSDate *queryTime;
@property (readonly) NSString *serverHint;
@property (readonly) NSString *traceUUID;

- (id)initWithUUID:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
