@class NSArray, NSNumber;

@interface ULHomeSlamModelData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *mapROIs;
@property (retain, nonatomic) NSArray *trajectoryPoints;
@property (retain, nonatomic) NSNumber *numberOfInputSegments;

+ (id)new;
+ (id)emptyHomeSlamModelData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMapROIs:(id)a0 trajectoryPoints:(id)a1 numInputSegments:(id)a2;

@end
