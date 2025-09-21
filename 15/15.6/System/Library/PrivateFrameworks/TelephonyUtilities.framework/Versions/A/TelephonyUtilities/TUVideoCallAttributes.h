@interface TUVideoCallAttributes : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long remoteCameraOrientation;
@property (nonatomic) long long localVideoContextSlotIdentifier;
@property (nonatomic) long long remoteVideoContextSlotIdentifier;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToVideoCallAttributes:(id)a0;

@end
