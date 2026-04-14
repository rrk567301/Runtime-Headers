@class NSArray, AVAssetWriterInputPassDescriptionInternal;

@interface AVAssetWriterInputPassDescription : NSObject {
    AVAssetWriterInputPassDescriptionInternal *_internal;
}

@property (readonly, nonatomic) NSArray *sourceTimeRanges;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithTimeRanges:(id)a0;

@end
