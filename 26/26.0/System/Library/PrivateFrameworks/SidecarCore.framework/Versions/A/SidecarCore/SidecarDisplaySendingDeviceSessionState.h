@class SidecarDevice;

@interface SidecarDisplaySendingDeviceSessionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SidecarDevice *device;
@property (readonly, nonatomic) long long sessionState;
@property (readonly, nonatomic) long long visualDetectability;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 sessionState:(long long)a1;
- (id)initWithDevice:(id)a0 sessionState:(long long)a1 visualDetectability:(long long)a2;

@end
