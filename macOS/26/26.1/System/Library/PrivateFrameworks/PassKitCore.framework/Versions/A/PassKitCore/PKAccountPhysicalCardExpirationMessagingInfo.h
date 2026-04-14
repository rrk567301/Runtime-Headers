@class NSString;

@interface PKAccountPhysicalCardExpirationMessagingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long scatterInterval;
@property (readonly, copy, nonatomic) NSString *physicalCardIdentifier;
@property (readonly, nonatomic) unsigned long long messagingType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
