@class RBProcessMap;

@interface RBCoalition : NSObject {
    unsigned long long _level;
    RBProcessMap *_processes;
    RBProcessMap *_processStates;
}

@property (readonly, nonatomic) unsigned long long coalitionID;
@property (nonatomic) unsigned long long coalitionLevel;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned long long previousCoalitionLevel;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) double lastModificationTime;

- (void)removeProcess:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateProcessesUsingBlock:(id /* block */)a0;
- (id)initWithCoalitionID:(unsigned long long)a0;
- (void)setProcess:(id)a0 withState:(id)a1;

@end
