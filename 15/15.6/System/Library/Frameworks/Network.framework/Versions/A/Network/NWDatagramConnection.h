@interface NWDatagramConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)a0;

- (char)readDatagramsWithMinimumCount:(unsigned long long)a0 maximumCount:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (char)writeDatagrams:(id)a0 completionHandler:(id /* block */)a1;

@end
