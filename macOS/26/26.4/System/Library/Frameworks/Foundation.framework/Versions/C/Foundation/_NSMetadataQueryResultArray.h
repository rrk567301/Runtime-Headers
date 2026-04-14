@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (id)retain;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
