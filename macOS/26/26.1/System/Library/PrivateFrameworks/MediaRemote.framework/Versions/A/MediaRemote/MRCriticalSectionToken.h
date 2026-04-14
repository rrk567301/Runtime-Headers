@class NSUUID;

@interface MRCriticalSectionToken : NSObject

@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) NSUUID *requestID;

- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
