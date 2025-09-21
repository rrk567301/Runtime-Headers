@class NSURL, NSString, NSArray;

@interface SFTranscriberModelOptions : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSURL *supplementalModelURL;
@property (readonly, nonatomic) char farField;
@property (readonly, copy, nonatomic) NSString *geoLMRegionID;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSString *taskForMemoryLock;
@property (readonly, copy, nonatomic) NSArray *speechProfileURLs;
@property (readonly, nonatomic) char atypicalSpeech;
@property (readonly, nonatomic) char enableParallelLoading;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSupplementalModelURL:(id)a0 farField:(char)a1 geoLMRegionID:(id)a2 modelOverrideURL:(id)a3 speechProfileURLs:(id)a4 taskForMemoryLock:(id)a5 atypicalSpeech:(char)a6 enableParallelLoading:(char)a7;
- (id)initWithSupplementalModelURL:(id)a0 farField:(char)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 taskForMemoryLock:(id)a4;
- (id)initWithSupplementalModelURL:(id)a0 farField:(char)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 taskForMemoryLock:(id)a4 atypicalSpeech:(char)a5;
- (id)initWithSupplementalModelURL:(id)a0 farField:(char)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 taskForMemoryLock:(id)a4 atypicalSpeech:(char)a5 enableParallelLoading:(char)a6;
- (id)initWithSupplementalModelURL:(id)a0 farField:(char)a1 modelOverrideURL:(id)a2 taskForMemoryLock:(id)a3 atypicalSpeech:(char)a4;

@end
