@class NSSet, FINode;

@interface FICompoundNode : FICustomNode {
    struct unordered_set<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> { struct __hash_table<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<FINode *, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _nodesToComplete;
    BOOL _openSyncStartedSent;
}

@property (readonly, nonatomic) FINode *subjectNode;
@property (readonly, nonatomic) NSSet *nodes;

- (id)downloadProgress;
- (id)fileURL;
- (BOOL)isValid;
- (id)parent;
- (id)longDescription;
- (id).cxx_construct;
- (id)shortDescription;
- (void).cxx_destruct;
- (id)source;
- (id)enumeratorError;
- (unsigned int)volumeIs:(unsigned int)a0 error:(id *)a1;
- (id)copyFromAlias:(unsigned int)a0 allowUI:(BOOL)a1 followAliasChain:(BOOL)a2;
- (id)copyProgress;
- (void)dispatchEvent:(id)a0 forObserver:(id)a1;
- (id)fiDomain;
- (id)fileParent;
- (id)fpDomain;
- (id)fpItem;
- (id)initWithFINodes:(id)a0;
- (id)initWithNodes:(id)a0;
- (id)initWithNodes:(id)a0 subject:(id)a1;
- (void)inlineProgressCancel;
- (BOOL)isPopulated;
- (id)iteratorWithOptions:(unsigned int)a0;
- (BOOL)markAsUsed:(id *)a0;
- (unsigned long long)nodeIs:(unsigned long long)a0 error:(id *)a1;
- (unsigned int)nodePermissions:(unsigned int)a0 error:(id *)a1;
- (void)nodeRestartObservingWithOptions:(unsigned int)a0;
- (id)nodesForSizing;
- (id)nodesToObserve;
- (id)nodesWithSubject;
- (id)propertyAsArray:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (BOOL)propertyAsBool:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsBoolean:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsData:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsDate:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsDictionary:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsNSObject:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsNumber:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsString:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (BOOL)removePropertyValue:(unsigned int)a0 error:(id *)a1;
- (BOOL)requiresFPOperations;
- (BOOL)setProperty:(unsigned int)a0 asArray:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asBool:(BOOL)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asData:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asDate:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asDictionary:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asNumber:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asObject:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (BOOL)setProperty:(unsigned int)a0 asString:(id)a1 async:(BOOL)a2 options:(unsigned int)a3 error:(id *)a4;
- (void)startObserving:(unsigned int)a0 with:(struct OpaqueEventNotifier { } *)a1;
- (void)stopObserving:(unsigned int)a0 with:(struct OpaqueEventNotifier { } *)a1;
- (void)synchronizeChildren:(unsigned int)a0 events:(void *)a1;
- (void)synchronizeWithOptions:(unsigned int)a0 async:(BOOL)a1;

@end
