@class NSNumber, NSString, NSArray;

@interface MTRContentLauncherClusterParameter : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSArray *externalIDList;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
