@class NSString;

@interface MTRChannelClusterAdditionalInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
