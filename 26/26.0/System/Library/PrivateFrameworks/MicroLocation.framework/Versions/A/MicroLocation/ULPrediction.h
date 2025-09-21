@class NSUUID, NSArray, NSError, NSDate;

@interface ULPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) NSArray *confidenceReasons;
@property (readonly, nonatomic) NSArray *places;
@property (readonly, nonatomic) unsigned long long confidence;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
