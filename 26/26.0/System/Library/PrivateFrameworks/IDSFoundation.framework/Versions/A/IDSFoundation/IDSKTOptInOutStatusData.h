@class NSString, NSData, NSNumber;

@interface IDSKTOptInOutStatusData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSData *publicAccountKey;
@property (retain, nonatomic) NSNumber *optInStatus;
@property (retain, nonatomic) NSString *ktApplication;
@property (retain, nonatomic) NSNumber *optChangeReason;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
