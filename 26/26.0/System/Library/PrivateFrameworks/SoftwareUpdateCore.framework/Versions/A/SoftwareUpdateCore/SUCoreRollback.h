@class SUCoreRollbackDescriptor, SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreRollback : NSObject <NSSecureCoding, NSCopying> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUCoreRollbackDescriptor *rollback;
@property (readonly, retain, nonatomic) SUCoreRollbackDescriptor *eligibleRollback;

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)loadPersistedStateFile;
- (id)previousRollback;
- (void)rollbackCompleted;

@end
