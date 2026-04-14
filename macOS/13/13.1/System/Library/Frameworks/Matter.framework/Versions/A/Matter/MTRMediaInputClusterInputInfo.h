@class NSNumber, NSString;

@interface MTRMediaInputClusterInputInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSNumber *inputType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionString;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
