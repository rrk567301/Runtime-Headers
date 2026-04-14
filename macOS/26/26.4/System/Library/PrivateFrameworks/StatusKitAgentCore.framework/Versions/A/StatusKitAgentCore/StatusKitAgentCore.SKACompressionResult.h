@class NSData;

@interface StatusKitAgentCore.SKACompressionResult : NSObject {
    void /* function */ data;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long inputSize;
@property (nonatomic, readonly) long long outputSize;
@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) double compressionRatio;
@property (nonatomic, readonly) long long originalSize;
@property (nonatomic, readonly) long long compressedSize;
@property (nonatomic, readonly) long long decompressedSize;

- (void).cxx_destruct;
- (id)init;

@end
