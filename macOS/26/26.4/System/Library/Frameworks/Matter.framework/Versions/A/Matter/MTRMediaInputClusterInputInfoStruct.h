@class NSNumber, NSString;

@interface MTRMediaInputClusterInputInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSNumber *inputType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
