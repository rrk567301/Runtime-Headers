@class NSArray;

@interface HMMatterCommandAction : HMAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSArray *commands;
@property (readonly, nonatomic) BOOL enforceExecutionOrder;

+ (BOOL)supportsSecureCoding;
+ (id)new;
+ (id)actionWithProtoBuf:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0;
- (unsigned long long)type;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)_serializeForAdd;
- (id)encodeAsProtoBuf;
- (id)initWithCommands:(id)a0 enforceExecutionOrder:(BOOL)a1 uuid:(id)a2;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (id)initWithMatterCommands:(id)a0 enforceExecutionOrder:(BOOL)a1;

@end
