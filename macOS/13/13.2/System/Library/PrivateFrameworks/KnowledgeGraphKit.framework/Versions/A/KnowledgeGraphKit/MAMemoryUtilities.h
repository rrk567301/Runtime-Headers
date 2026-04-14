@interface MAMemoryUtilities : NSObject

+ (id)humanReadableMemoryFootprint;
+ (id)humanReadableMemorySizeWithSize:(unsigned long long)a0;
+ (id)humanReadableResidentMemory;
+ (id)humanReadablePeakMemoryFootprint;
+ (unsigned long long)footprintBytes;
+ (unsigned long long)peakFootprintBytes;
+ (unsigned long long)residentBytes;

@end
