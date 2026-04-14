@class NSArray, NSNumber;

@interface ULMapROI : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *mapPoints;
@property (retain, nonatomic) NSNumber *roomIndex;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapPoints:(id)a0 roomIndex:(id)a1;

@end
