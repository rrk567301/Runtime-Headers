@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_tasksByType;
    NSMutableDictionary *_mutableTasksByType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasTasks;

+ (id)descriptionForTaskType:(long long)a0;

- (id)invalidRecordIdentifiers;
- (void)enumerateTasksWithBlock:(id /* block */)a0;
- (id)_descriptionFromTasksByType:(id)a0;
- (id)invalidRecordScopedIdentifiers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTask:(long long)a0 forRecordWithScopedIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_commitTasks;
- (id)initEmpty;
- (void)enumerateScopedTasksWithBlock:(id /* block */)a0;

@end
