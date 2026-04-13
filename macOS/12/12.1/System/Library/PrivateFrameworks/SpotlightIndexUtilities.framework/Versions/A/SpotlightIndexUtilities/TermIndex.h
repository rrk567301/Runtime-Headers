@interface TermIndex : NSObject

@property (readonly, nonatomic) struct __SI { } *index;
@property (readonly, nonatomic) unsigned long long cindex;
@property (readonly, nonatomic) unsigned long long base;
@property (readonly, nonatomic) int flags;
@property (readonly, nonatomic) const char *name;
@property (readonly, nonatomic) int postings_fd;
@property (readonly, nonatomic) BOOL compact;
@property (readonly, nonatomic) unsigned long long postings_size;
@property (readonly, nonatomic) unsigned long long *term_ids;
@property (readonly, nonatomic) unsigned long long term_ids_limit;
@property (readonly, nonatomic) unsigned long long term_ids_map_size;
@property (readonly, nonatomic) unsigned long long *doc_ids;
@property (readonly, nonatomic) unsigned long long doc_ids_limit;
@property (readonly, nonatomic) unsigned long long doc_ids_map_size;
@property (readonly, nonatomic) void *groups;
@property (readonly, nonatomic) unsigned long long groups_limit;
@property (readonly, nonatomic) unsigned long long groups_map_size;
@property (readonly, nonatomic) BOOL coreSpotlight;

- (void)dealloc;
- (id)init;
- (void)getPostings:(unsigned long long)a0 block:(id /* block */)a1;
- (unsigned char)groupForDocID:(unsigned int)a0;
- (id)initWithIndex:(struct __SI { } *)a0 cindex:(long long)a1 atPath:(const char *)a2 coreSpotlight:(BOOL)a3;
- (unsigned long long)oidForDocID:(unsigned int)a0;
- (void)directoryStoreIterate:(id /* block */)a0;
- (unsigned long long)postingCount:(unsigned long long)a0;
- (void)getTerms:(id /* block */)a0;
- (void)docIDsIterate:(id /* block */)a0;

@end
