@class NSString;

@interface PKFlightSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSString *flightIdentifier;
@property (retain, nonatomic) NSString *channelIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFlightIdentifier:(id)a0 channelIdentifier:(id)a1 isActive:(BOOL)a2;

@end
