@class NSNumber, NSString;

@interface MTRRVCOperationalStateClusterOperationalStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *operationalStateID;
@property (copy, nonatomic) NSString *operationalStateLabel;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
