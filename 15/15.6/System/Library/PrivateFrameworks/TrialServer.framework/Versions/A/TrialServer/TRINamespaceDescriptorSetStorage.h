@protocol TRIPaths;

@interface TRINamespaceDescriptorSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (id)_collectNamespaceDescriptorSets;
- (char)hasNamespaceDescriptorsForTreatmentWithId:(id)a0 path:(id *)a1;
- (char)overwriteNamespaceDescriptors:(id)a0 forTreatmentId:(id)a1;
- (id)parentDirForNamespaceDescriptorSets;
- (id)pathForNamespaceDescriptorsWithTreatmentId:(id)a0;
- (char)removeUnreferencedNamespaceDescriptorSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;

@end
