@class NSNumber;

@interface CTResumableRoadsideProvider : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char success;
@property (retain, nonatomic) NSNumber *providerId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCTResumableRoadsideProvider:(id)a0;

@end
