@interface ASTSessionInfo : NSObject

@property (readonly, nonatomic) long long queuedSuiteType;
@property (readonly, nonatomic) BOOL isGuided;

- (id)description;
- (id)_descriptionForQueuedSuiteType:(long long)a0;
- (id)initWithQueuedSuiteType:(long long)a0 isGuided:(BOOL)a1;

@end
