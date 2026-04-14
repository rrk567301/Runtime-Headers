@class NSNumber, NSString;

@interface MTROvenCavityOperationalStateClusterErrorStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *errorStateID;
@property (copy, nonatomic) NSString *errorStateLabel;
@property (copy, nonatomic) NSString *errorStateDetails;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
