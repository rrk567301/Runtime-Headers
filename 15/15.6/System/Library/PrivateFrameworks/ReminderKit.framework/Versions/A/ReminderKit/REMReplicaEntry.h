@class REMClockElementList;
@protocol REMReplicaManagerClient;

@interface REMReplicaEntry : NSObject

@property (nonatomic) unsigned int replicaUUIDIndex;
@property (retain, nonatomic) REMClockElementList *clockElementList;
@property (nonatomic) char inUse;
@property (nonatomic) id<REMReplicaManagerClient> client;

- (id)description;
- (void).cxx_destruct;
- (void)encodeIntoEntryArchive:(void *)a0;
- (char)hasEqualPersistedPropertiesAs:(id)a0;
- (id)initWithEntryArchive:(const void *)a0;
- (id)initWithReplicaUUIDIndex:(unsigned int)a0 clockElementList:(id)a1 inUse:(char)a2 forClient:(id)a3;
- (id)persistenceDescription;

@end
