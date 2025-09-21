@interface ASTSessionInfo : NSObject

@property (readonly, nonatomic) long long queuedSuiteType;
@property (readonly, nonatomic) char isGuided;
@property (readonly, nonatomic) int deviceIndex;
@property (readonly, nonatomic) long long sessionType;

- (id)description;
- (id)_descriptionForQueuedSuiteType:(long long)a0;
- (id)_descriptionForSessionType:(long long)a0;
- (id)initWithQueuedSuiteType:(long long)a0 isGuided:(char)a1 deviceIndex:(int)a2 sessionType:(long long)a3;

@end
