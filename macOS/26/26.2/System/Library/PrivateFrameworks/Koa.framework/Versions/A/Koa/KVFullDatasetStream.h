@interface KVFullDatasetStream : KVDatasetStream

- (unsigned short)errorCode;
- (BOOL)registerCascadeItem:(id)a0 error:(id *)a1;
- (BOOL)registerItem:(id)a0 error:(id *)a1;

@end
