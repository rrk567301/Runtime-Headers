@class MTRRVCOperationalStateClusterErrorStateStruct;

@interface MTRRVCOperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRRVCOperationalStateClusterErrorStateStruct *errorState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
