@class NSNumber, NSString;

@interface MTROperationalStateClusterErrorStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *errorStateID;
@property (copy, nonatomic) NSString *errorStateLabel;
@property (copy, nonatomic) NSString *errorStateDetails;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
