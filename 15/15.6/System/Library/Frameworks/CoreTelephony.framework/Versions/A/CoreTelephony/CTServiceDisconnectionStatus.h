@class NSString, NSNumber;

@interface CTServiceDisconnectionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int contextType;
@property (retain, nonatomic) NSString *apnName;
@property (nonatomic) char activationFailure;
@property (retain, nonatomic) NSNumber *connectionMask;
@property (nonatomic) int error;
@property (retain, nonatomic) NSNumber *rawCauseCode;
@property (retain, nonatomic) NSNumber *pdp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
