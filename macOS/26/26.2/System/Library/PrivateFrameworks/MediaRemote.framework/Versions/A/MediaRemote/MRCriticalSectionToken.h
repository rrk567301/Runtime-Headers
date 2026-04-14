@class NSUUID;

@interface MRCriticalSectionToken : NSObject

@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) NSUUID *requestID;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;

@end
