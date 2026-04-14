@class NSUUID, NSString, NSData, NSDate, NSNumber;

@interface SPSamplingTasking : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *expiration;
@property (retain, nonatomic) NSNumber *samplingRate;
@property (retain, nonatomic) NSData *publicKey;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
