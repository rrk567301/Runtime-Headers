@class NSNumber, NSString;

@interface MTROperationalStateClusterOperationalStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *operationalStateID;
@property (copy, nonatomic) NSString *operationalStateLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
