@class MTROperationalStateClusterErrorStateStruct;

@interface MTROperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTROperationalStateClusterErrorStateStruct *errorState;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
