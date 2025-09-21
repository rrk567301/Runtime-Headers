@class NSString, NSNumber;

@interface CTPNRRequestSentInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char success;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSNumber *timeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCTPNRRequestSentInfo:(id)a0;

@end
