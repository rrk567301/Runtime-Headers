@interface KVFullDatasetStream : KVDatasetStream

- (BOOL)registerItem:(id)a0 error:(id *)a1;
- (BOOL)registerCascadeItem:(id)a0 error:(id *)a1;
- (unsigned short)errorCode;

@end
