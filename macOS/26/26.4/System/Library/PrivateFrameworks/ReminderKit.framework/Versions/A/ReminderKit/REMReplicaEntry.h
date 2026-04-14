@class REMClockElementList;
@protocol REMReplicaManagerClient;

@interface REMReplicaEntry : NSObject

@property (nonatomic) unsigned int replicaUUIDIndex;
@property (retain, nonatomic) REMClockElementList *clockElementList;
@property (nonatomic) BOOL inUse;
@property (nonatomic) id<REMReplicaManagerClient> client;

- (void).cxx_destruct;
- (id)description;
- (void)encodeIntoEntryArchive:(void *)a0;
- (BOOL)hasEqualPersistedPropertiesAs:(id)a0;
- (id)initWithEntryArchive:(const void *)a0;
- (id)initWithReplicaUUIDIndex:(unsigned int)a0 clockElementList:(id)a1 inUse:(BOOL)a2 forClient:(id)a3;
- (id)persistenceDescription;

@end
