@class NSArray, NSNumber;

@interface ULHomeSlamModelData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *mapROIs;
@property (retain, nonatomic) NSArray *trajectoryPoints;
@property (retain, nonatomic) NSNumber *numberOfInputSegments;

+ (id)new;
+ (id)emptyHomeSlamModelData;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapROIs:(id)a0 trajectoryPoints:(id)a1 numInputSegments:(id)a2;

@end
