@class NSNumber, NSProgress;

@interface _BRCTransferInfo : NSObject

@property (retain, nonatomic) NSNumber *versionSize;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) long long accumulatedCUCDelta;

- (void).cxx_destruct;
- (id)initWithVersionSize:(id)a0;

@end
