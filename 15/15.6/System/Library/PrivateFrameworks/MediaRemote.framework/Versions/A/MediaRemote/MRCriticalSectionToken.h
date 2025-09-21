@class NSUUID;

@interface MRCriticalSectionToken : NSObject

@property (nonatomic) char invalidated;
@property (readonly, nonatomic) NSUUID *requestID;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
