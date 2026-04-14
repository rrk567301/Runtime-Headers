@class NSUUID;

@interface ULLocationOfInterest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long locationOfInterestType;
@property (retain, nonatomic) NSUUID *locationOfInterestUUID;

+ (id)emptyLocationOfInterest;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocationOfInterestType:(unsigned long long)a0 locationOfInterestUUID:(id)a1;

@end
