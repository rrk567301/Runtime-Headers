@class NSString, NSNumber, NSArray;

@interface MTRMicrowaveOvenModeClusterModeOptionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSArray *modeTags;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
