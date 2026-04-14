@class MTROvenCavityOperationalStateClusterErrorStateStruct;

@interface MTROvenCavityOperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTROvenCavityOperationalStateClusterErrorStateStruct *errorState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
