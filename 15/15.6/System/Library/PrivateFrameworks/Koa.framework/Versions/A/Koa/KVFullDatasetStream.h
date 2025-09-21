@interface KVFullDatasetStream : KVDatasetStream

- (unsigned short)errorCode;
- (char)registerItem:(id)a0 error:(id *)a1;
- (char)registerCascadeItem:(id)a0 error:(id *)a1;

@end
