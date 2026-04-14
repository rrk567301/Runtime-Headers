@class MTROperationalStateClusterErrorStateStruct;

@interface MTROperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTROperationalStateClusterErrorStateStruct *errorState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
