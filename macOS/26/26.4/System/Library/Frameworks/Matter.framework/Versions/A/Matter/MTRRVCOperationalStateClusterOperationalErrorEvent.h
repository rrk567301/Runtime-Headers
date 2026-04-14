@class MTRRVCOperationalStateClusterErrorStateStruct;

@interface MTRRVCOperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRRVCOperationalStateClusterErrorStateStruct *errorState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
