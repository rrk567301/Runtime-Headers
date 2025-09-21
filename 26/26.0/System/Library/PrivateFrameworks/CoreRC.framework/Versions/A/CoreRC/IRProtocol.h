@interface IRProtocol : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char protocolID;
@property (readonly, nonatomic) unsigned char options;
@property (readonly, nonatomic) double repeatInterval;
@property (readonly, nonatomic) double carrierFrequency;

+ (id)protocolWithID:(unsigned char)a0 options:(unsigned char)a1;
+ (id)protocolWithID:(unsigned char)a0 options:(unsigned char)a1 hasRepeats:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtocolID:(unsigned char)a0 options:(unsigned char)a1;

@end
