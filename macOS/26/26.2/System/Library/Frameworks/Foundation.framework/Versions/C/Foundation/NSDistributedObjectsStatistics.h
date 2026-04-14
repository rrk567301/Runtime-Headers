@interface NSDistributedObjectsStatistics : NSDictionary {
    unsigned long long requestsReceived;
    unsigned long long repliesSent;
    unsigned long long requestsSent;
    unsigned long long repliesReceived;
}

- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)addStatistics:(id)a0;

@end
