@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)objectAtIndex:(unsigned long long)a0;

@end
