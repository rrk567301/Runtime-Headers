@class NSString, NSNumber, NSArray;

@interface MTRModeSelectClusterModeOptionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSArray *semanticTags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
