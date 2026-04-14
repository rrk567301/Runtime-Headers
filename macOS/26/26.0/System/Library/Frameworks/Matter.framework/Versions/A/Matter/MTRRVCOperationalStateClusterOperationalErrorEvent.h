@class MTRRVCOperationalStateClusterErrorStateStruct;

@interface MTRRVCOperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRRVCOperationalStateClusterErrorStateStruct *errorState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
