@class NSNumber, NSData;

@interface CTSMSDataType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSNumber *transport;
@property (nonatomic) NSNumber *ctFormat;
@property (nonatomic) BOOL parseSMSC;
@property (nonatomic) BOOL waitForAck;
@property (retain, nonatomic) NSData *hexPdu;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToCTSMSDataType:(id)a0;

@end
