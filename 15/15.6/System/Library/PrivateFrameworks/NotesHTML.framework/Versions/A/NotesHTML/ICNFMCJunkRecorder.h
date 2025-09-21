@class NSDictionary, NSMutableDictionary;

@interface ICNFMCJunkRecorder : NSObject {
    NSMutableDictionary *_imageInfos;
}

@property char isShort;
@property char isSigned;
@property unsigned long long imageCount;
@property unsigned long long characterCount;
@property double imageToTextRatio;
@property double lsmScore;
@property (readonly, copy) NSDictionary *imageInfos;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setImageJunkInfo:(id)a0 forKey:(id)a1;

@end
