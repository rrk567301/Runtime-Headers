@class NSArray;

@interface UAFAssetSetStatus : NSObject

@property (class, readonly, nonatomic) NSArray *downloadStatusPrecedence;

@property (readonly) double completedPercent;
@property (readonly) unsigned long long completedBytes;
@property (readonly) unsigned long long totalBytes;
@property (readonly) unsigned long long downloadStatus;

+ (unsigned long long)coalesceDownloadStatus:(unsigned long long)a0 withDownloadStatus:(unsigned long long)a1;
+ (unsigned long long)precedenceOfStatus:(unsigned long long)a0;

- (id)initWithStatus:(unsigned long long)a0 percent:(double)a1 completedBytes:(unsigned long long)a2 totalBytes:(unsigned long long)a3;

@end
