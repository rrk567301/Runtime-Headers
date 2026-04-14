@class NSNumber, NSString;

@interface MTROperationalStateClusterOperationalStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *operationalStateID;
@property (copy, nonatomic) NSString *operationalStateLabel;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
