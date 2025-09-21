@interface IOCEventIOStopRequest : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int direction;
@property (nonatomic) int reason;
@property (nonatomic) BOOL notifyIOClients;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDirection:(unsigned int)a0 reason:(int)a1 notifyIOClients:(BOOL)a2;

@end
