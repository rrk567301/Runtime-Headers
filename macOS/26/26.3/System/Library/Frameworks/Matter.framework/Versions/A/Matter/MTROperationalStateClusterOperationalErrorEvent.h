@class MTROperationalStateClusterErrorStateStruct;

@interface MTROperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTROperationalStateClusterErrorStateStruct *errorState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
