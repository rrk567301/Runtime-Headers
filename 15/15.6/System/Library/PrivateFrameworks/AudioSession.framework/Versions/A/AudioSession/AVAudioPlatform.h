@class NSArray, AVAudioSessionManager;

@interface AVAudioPlatform : NSObject {
    AVAudioSessionManager *_sessionMgr;
}

@property (readonly, nonatomic) char mixStereoToMono;
@property (readonly, nonatomic) NSArray *availableCategories;
@property (readonly, nonatomic) NSArray *availableModes;
@property (readonly, nonatomic, getter=isInputAvailable) char inputAvailable;

+ (id)defaultInstance;

- (void).cxx_destruct;
- (id)categoriesMatchingScope:(unsigned long long)a0;
- (char)enableMixStereoToMono:(char)a0 error:(id *)a1;
- (id)initWithSessionMgr:(id)a0;
- (char)isCategoryValid:(id)a0;
- (char)isModeValid:(id)a0;
- (id)modesMatchingScope:(unsigned long long)a0;

@end
