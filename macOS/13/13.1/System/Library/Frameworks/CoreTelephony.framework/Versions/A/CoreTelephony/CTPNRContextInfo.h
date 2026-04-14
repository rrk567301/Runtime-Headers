@class NSString;

@interface CTPNRContextInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isReady;
@property (retain, nonatomic) NSString *plmn;
@property (retain, nonatomic) NSString *imsi;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *phoneNumberOnSIM;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToPNRContextInfo:(id)a0;

@end
