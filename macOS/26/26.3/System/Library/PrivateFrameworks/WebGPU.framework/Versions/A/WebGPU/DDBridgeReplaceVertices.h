@class NSData;

@interface DDBridgeReplaceVertices : NSObject {
    void /* function */ buffer;
}

@property (nonatomic, readonly) long long bufferIndex;
@property (nonatomic, readonly) NSData *buffer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBufferIndex:(long long)a0 buffer:(id)a1;

@end
