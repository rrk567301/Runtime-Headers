@interface SCNLowLatencyMetalLayer : CAMetalLayer

- (char)lowLatency;
- (unsigned long long)maximumDrawableCount;

@end
