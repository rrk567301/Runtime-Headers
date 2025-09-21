@class NSUUID, NSDate, CWFAutoJoinParameters;

@interface CWFAutoJoinRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFAutoJoinParameters *parameters;
@property (nonatomic) char allowAutoHotspotFallback;
@property (copy, nonatomic) NSDate *addedAt;
@property (nonatomic) char throttled;
@property (copy, nonatomic) id /* block */ reply;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
