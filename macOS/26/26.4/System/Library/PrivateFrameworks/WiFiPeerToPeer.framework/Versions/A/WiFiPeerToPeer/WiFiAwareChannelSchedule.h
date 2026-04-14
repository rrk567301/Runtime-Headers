@class NSData;

@interface WiFiAwareChannelSchedule : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int channel;
@property (readonly, nonatomic) unsigned int bandwidth;
@property (readonly, nonatomic) unsigned int band;
@property (readonly, nonatomic) unsigned int period;
@property (readonly, nonatomic) NSData *timeBitmap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithChannel:(unsigned int)a0 bandwidth:(unsigned int)a1 band:(unsigned int)a2 period:(unsigned int)a3 timeBitmap:(id)a4;

@end
