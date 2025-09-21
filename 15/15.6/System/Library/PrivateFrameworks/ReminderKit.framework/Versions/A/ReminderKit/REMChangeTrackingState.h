@class REMChangeToken, NSDate;

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastConsumedDate;
@property (retain, nonatomic) REMChangeToken *lastConsumedChangeToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
