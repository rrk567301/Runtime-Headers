@class NSMutableArray;

@interface ML3UpdateSiriIndexOperation : ML3DatabaseOperation

@property (readonly, nonatomic) NSMutableArray *donators;

- (void).cxx_destruct;
- (unsigned long long)type;
- (void)_enumerateUserIDsWithBlock:(id /* block */)a0;
- (char)_execute:(id *)a0;
- (char)_performFullIndexToRevision:(long long)a0 withDatasetStream:(id)a1;
- (char)_performIncrementalIndexToRevision:(long long)a0 withDatasetStream:(id)a1;

@end
