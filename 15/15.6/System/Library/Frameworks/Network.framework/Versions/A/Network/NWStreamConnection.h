@interface NWStreamConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)a0;

- (char)readDataWithMinimumLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (char)writeCloseWithCompletionHandler:(id /* block */)a0;
- (char)writeData:(id)a0 completionHandler:(id /* block */)a1;

@end
