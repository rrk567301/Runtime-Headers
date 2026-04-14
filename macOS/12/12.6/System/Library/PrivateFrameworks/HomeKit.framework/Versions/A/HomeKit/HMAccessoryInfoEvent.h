@class HMAccessoryInfo;

@interface HMAccessoryInfoEvent : HMEEvent

@property (readonly, nonatomic) HMAccessoryInfo *accessoryInfo;

+ (id)decodeAccessoryInfoFromEvent:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)encodedData;
- (id)initWithAccessoryInfo:(id)a0 eventSource:(id)a1 eventTimestamp:(double)a2;

@end
