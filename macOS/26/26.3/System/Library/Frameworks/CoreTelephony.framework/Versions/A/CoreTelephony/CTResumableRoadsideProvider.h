@class NSNumber;

@interface CTResumableRoadsideProvider : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSNumber *providerId;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToCTResumableRoadsideProvider:(id)a0;

@end
