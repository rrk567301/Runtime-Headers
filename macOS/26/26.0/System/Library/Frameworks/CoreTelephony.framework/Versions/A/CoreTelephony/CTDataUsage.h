@interface CTDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long cellularHome;
@property (nonatomic) unsigned long long cellularRoaming;
@property (nonatomic) unsigned long long satellite;
@property (nonatomic) unsigned long long wifi;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithHome:(unsigned long long)a0 roaming:(unsigned long long)a1 satellite:(unsigned long long)a2;
- (void)addUsage:(id)a0;
- (id)initWithHome:(unsigned long long)a0 roaming:(unsigned long long)a1;
- (id)initWithHome:(unsigned long long)a0 roaming:(unsigned long long)a1 wifi:(unsigned long long)a2;

@end
