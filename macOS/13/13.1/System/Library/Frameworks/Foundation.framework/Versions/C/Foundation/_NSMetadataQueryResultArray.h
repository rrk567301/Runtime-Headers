@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;

@end
