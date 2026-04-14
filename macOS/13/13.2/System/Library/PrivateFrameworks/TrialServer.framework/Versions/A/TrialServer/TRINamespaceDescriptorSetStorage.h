@protocol TRIPaths;

@interface TRINamespaceDescriptorSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (BOOL)overwriteNamespaceDescriptors:(id)a0 forTreatmentId:(id)a1;
- (id)pathForNamespaceDescriptorsWithTreatmentId:(id)a0;
- (id)parentDirForNamespaceDescriptorSets;
- (BOOL)hasNamespaceDescriptorsForTreatmentWithId:(id)a0 path:(id *)a1;
- (id)_collectNamespaceDescriptorSets;
- (BOOL)removeUnreferencedNamespaceDescriptorSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;

@end
