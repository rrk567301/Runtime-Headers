@class MTRRVCOperationalStateClusterErrorStateStruct;

@interface MTRRVCOperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRRVCOperationalStateClusterErrorStateStruct *errorState;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
