@class NSString, SKStatusPayload, NSDate;

@interface SKStatusPublishRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SKStatusPayload *statusPayload;
@property (nonatomic) BOOL isScheduledRequest;
@property (retain, nonatomic) NSString *statusUniqueIdentifier;
@property (retain, nonatomic) NSDate *dateCreated;
@property (nonatomic) BOOL isSecondaryDeviceRepublish;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStatusPayload:(id)a0;
- (id)initWithStatusPayload:(id)a0 isScheduledRequest:(BOOL)a1;

@end
