@class NSArray, NSNumber;

@interface ULHomeSlamModelData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *mapROIs;
@property (retain, nonatomic) NSArray *trajectoryPoints;
@property (retain, nonatomic) NSNumber *numberOfInputSegments;

+ (id)new;
+ (id)emptyHomeSlamModelData;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithMapROIs:(id)a0 trajectoryPoints:(id)a1 numInputSegments:(id)a2;

@end
