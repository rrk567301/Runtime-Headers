@class BGTask, _DASActivity;

@interface _BGTaskExpirationRequest : NSObject <NSCopying>

@property (readonly) _DASActivity *schedulerActivity;
@property (readonly) BGTask *task;
@property long long reason;

+ (id)requestWithActivity:(id)a0 task:(id)a1 reason:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithActivity:(id)a0 task:(id)a1 reason:(long long)a2;

@end
