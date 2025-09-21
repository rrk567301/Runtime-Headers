@class NSObject;
@protocol OS_dispatch_data;

@interface HMDDataStreamFrameReader : NSObject {
    NSObject<OS_dispatch_data> *_partialFrame;
    char _headerInfoRead;
    char _streamFailed;
    unsigned char _currentframeType;
    unsigned long long _payloadLength;
}

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (char)hasFailed;
- (unsigned long long)_getCurrentFrameSize;
- (void)_readFrameHeaderIfPossible;
- (unsigned long long)bytesNeededForCurrentFrame;
- (char)hasCompleteFrame;
- (char)hasPartialData;
- (id)popRawFrame;
- (void)pushFrameData:(id)a0;

@end
