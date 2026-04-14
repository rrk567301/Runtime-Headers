@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (oneway void)release;

@end
