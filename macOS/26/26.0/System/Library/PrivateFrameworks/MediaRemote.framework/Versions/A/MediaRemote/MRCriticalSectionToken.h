@class NSUUID;

@interface MRCriticalSectionToken : NSObject

@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) NSUUID *requestID;

- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
