@class NSString, NSUUID;

@interface CXCall : NSObject <NSSecureCoding, CXCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *providerIdentifier;
@property (nonatomic, getter=isOutgoing) char outgoing;
@property (nonatomic, getter=isOnHold) char onHold;
@property (nonatomic) char hasConnected;
@property (nonatomic) char hasEnded;
@property (nonatomic, getter=isEndpointOnCurrentDevice) char endpointOnCurrentDevice;
@property (nonatomic, getter=isHostedOnCurrentDevice) char hostedOnCurrentDevice;
@property (nonatomic, getter=isVideo) char video;
@property (nonatomic, getter=isScreening) char screening;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (char)isEqualToCall:(id)a0;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
