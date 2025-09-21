@class NSString, SKStatusPayload, NSDate;

@interface SKStatusPublishRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) SKStatusPayload *statusPayload;
@property (nonatomic) char isScheduledRequest;
@property (retain, nonatomic) NSString *statusUniqueIdentifier;
@property (retain, nonatomic) NSDate *dateCreated;
@property (nonatomic) char isSecondaryDeviceRepublish;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatusPayload:(id)a0;
- (id)initWithStatusPayload:(id)a0 isScheduledRequest:(char)a1;

@end
