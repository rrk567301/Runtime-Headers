@class NSArray, AVAssetWriterInputPassDescriptionInternal;

@interface AVAssetWriterInputPassDescription : NSObject {
    AVAssetWriterInputPassDescriptionInternal *_internal;
}

@property (readonly, nonatomic) NSArray *sourceTimeRanges;

- (void)dealloc;
- (id)init;
- (id)description;
- (id)initWithTimeRanges:(id)a0;

@end
