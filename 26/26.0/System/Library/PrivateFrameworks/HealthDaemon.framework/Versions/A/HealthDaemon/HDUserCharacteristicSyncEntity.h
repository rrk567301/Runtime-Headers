@class NSString, HDSyncEntityIdentifier;

@interface HDUserCharacteristicSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)category;
+ (int)nanoSyncObjectType;
+ (long long)receiveSyncObjects:(id)a0 version:(struct { int x0; int x1; })a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;


@end
