@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (id)retain;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (oneway void)release;
- (void)dealloc;

@end
