@class NSNumber, NSData;

@interface CTSMSDataType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSNumber *transport;
@property (nonatomic) NSNumber *ctFormat;
@property (nonatomic) BOOL parseSMSC;
@property (nonatomic) BOOL waitForAck;
@property (retain, nonatomic) NSData *hexPdu;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCTSMSDataType:(id)a0;

@end
