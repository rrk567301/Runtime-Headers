@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_tasksByType;
    NSMutableDictionary *_mutableTasksByType;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasTasks;

+ (id)descriptionForTaskType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initEmpty;
- (void)enumerateScopedTasksWithBlock:(id /* block */)a0;
- (void)_commitTasks;
- (id)_descriptionFromTasksByType:(id)a0;
- (void)addTask:(long long)a0 forRecordWithScopedIdentifier:(id)a1;
- (void)enumerateTasksWithBlock:(id /* block */)a0;
- (id)invalidRecordIdentifiers;
- (id)invalidRecordScopedIdentifiers;

@end
