@class NSNumber, NSString;

@interface MTROperationalStateClusterErrorStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *errorStateID;
@property (copy, nonatomic) NSString *errorStateLabel;
@property (copy, nonatomic) NSString *errorStateDetails;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
