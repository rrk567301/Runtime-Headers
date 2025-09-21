@class NSObject, NSMutableDictionary, NSFileHandle;
@protocol SMNStreamMuxerDelegate, OS_dispatch_source, OS_dispatch_queue, SMNNetworkSecurityProvider;

@interface SMNNetworkStreamMuxer : NSObject {
    char *upBuffer;
    char *downBuffer;
}

@property (retain) NSFileHandle *socketFileHandle;
@property unsigned long long protocolVersion;
@property (retain) NSObject<OS_dispatch_queue> *listAccessQueue;
@property (retain) NSMutableDictionary *downStreamsByID;
@property (retain) NSMutableDictionary *upStreamsByID;
@property unsigned int streamIDMin;
@property unsigned int streamIDMax;
@property unsigned int streamIDNext;
@property (retain) NSObject<OS_dispatch_queue> *incomingDataQueue;
@property (retain) NSObject<OS_dispatch_source> *upSource;
@property (retain) NSObject<OS_dispatch_queue> *outgoingDataQueue;
@property long long upBufferSize;
@property long long downBufferSize;
@property char interrupted;
@property (weak) id<SMNStreamMuxerDelegate> delegate;
@property (retain) id<SMNNetworkSecurityProvider> securityProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)closeStream:(id)a0;
- (void)removeStream:(id)a0;
- (char)_doMuxerInitializationAsMaster:(char)a0;
- (char)_read:(int)a0 buffer:(void *)a1 bufferSize:(unsigned long long)a2 useSecurityProvider:(char)a3 usingFailureHandler:(id /* block */)a4;
- (char)_readFromMuxerFd:(void *)a0 bufferSize:(unsigned long long)a1 usingFailureHandler:(id /* block */)a2;
- (char)_readFromPipe:(int)a0 buffer:(void *)a1 bufferSize:(unsigned long long)a2 usingFailureHandler:(id /* block */)a3;
- (void)_selfDestruct;
- (char)_write:(int)a0 buffer:(void *)a1 bufferSize:(unsigned long long)a2 useSecurityProvider:(char)a3 usingFailureHandler:(id /* block */)a4;
- (char)_writeToMuxerFd:(void *)a0 bufferSize:(unsigned long long)a1 usingFailureHandler:(id /* block */)a2;
- (char)_writeToPipe:(int)a0 buffer:(void *)a1 bufferSize:(unsigned long long)a2 usingFailureHandler:(id /* block */)a3;
- (void)closeStream:(id)a0 initiatedLocally:(char)a1;
- (id)createNewStreamFromIncomingID:(unsigned int)a0;
- (id)createNewStreamFromIncomingID:(unsigned int)a0 withName:(id)a1;
- (id)getStreamWithID:(id)a0 isDownward:(char *)a1;
- (id)initWithSocketFileHandle:(id)a0 baseQueueName:(id)a1 andProtocolVersion:(unsigned long long)a2;
- (id)newStreamPairedWithStream:(id)a0;
- (id)newStreamWithName:(id)a0;
- (char)nextChunkHeaderForStream:(unsigned int *)a0 ofSize:(unsigned int *)a1;
- (void)readIncomingData;
- (char)sendCommand:(char)a0 onStream:(unsigned int)a1 withSize:(unsigned int)a2;
- (void)sendOutgoingData:(id)a0 fileHandle:(id)a1;
- (char)startAsMaster:(char)a0;

@end
