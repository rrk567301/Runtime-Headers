@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_tasksByType;
    NSMutableDictionary *_mutableTasksByType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasTasks;

+ (id)descriptionForTaskType:(long long)a0;

- (id)description;
- (id)initEmpty;
- (void)enumerateScopedTasksWithBlock:(id /* block */)a0;
- (id)invalidRecordIdentifiers;
- (void)addTask:(long long)a0 forRecordWithScopedIdentifier:(id)a1;
- (id)invalidRecordScopedIdentifiers;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_descriptionFromTasksByType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateTasksWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_commitTasks;

@end
