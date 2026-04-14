@class NSString;

@interface PKFlightSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSString *flightIdentifier;
@property (retain, nonatomic) NSString *channelIdentifier;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFlightIdentifier:(id)a0 channelIdentifier:(id)a1 isActive:(BOOL)a2;

@end
