@class NSObject;
@protocol OS_dispatch_data;

@interface HMDDataStreamFrameReader : NSObject {
    NSObject<OS_dispatch_data> *_partialFrame;
    BOOL _headerInfoRead;
    BOOL _streamFailed;
    unsigned char _currentframeType;
    unsigned long long _payloadLength;
}

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)hasFailed;
- (BOOL)hasCompleteFrame;
- (BOOL)hasPartialData;
- (unsigned long long)_getCurrentFrameSize;
- (unsigned long long)bytesNeededForCurrentFrame;
- (void)pushFrameData:(id)a0;
- (void)_readFrameHeaderIfPossible;
- (id)popRawFrame;

@end
