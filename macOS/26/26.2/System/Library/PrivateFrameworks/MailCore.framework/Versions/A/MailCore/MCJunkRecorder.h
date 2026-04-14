@class NSArray, NSMutableArray;

@interface MCJunkRecorder : NSObject {
    NSMutableArray *_imageInfos;
}

@property BOOL isShort;
@property BOOL isSigned;
@property unsigned long long imageCount;
@property unsigned long long characterCount;
@property double imageToTextRatio;
@property double lsmScore;
@property (readonly, copy) NSArray *imageInfos;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)appendImageJunkInfo:(id)a0;

@end
