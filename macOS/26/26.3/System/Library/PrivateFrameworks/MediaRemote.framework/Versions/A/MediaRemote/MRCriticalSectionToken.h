@class NSUUID;

@interface MRCriticalSectionToken : NSObject

@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) NSUUID *requestID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
