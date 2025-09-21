@class NSString;

@interface CTSimDeactivationEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSString *reasonCode;
@property (retain, nonatomic) NSString *networkPlmn;
@property (nonatomic) char isRoaming;
@property (nonatomic) char isNetworkInitiated;
@property (retain, nonatomic) NSString *rat;
@property (nonatomic) long long timeOfEvent;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
