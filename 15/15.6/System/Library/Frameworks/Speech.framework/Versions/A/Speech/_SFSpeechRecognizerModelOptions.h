@class NSString, NSArray, NSURL, NSDictionary;

@interface _SFSpeechRecognizerModelOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char farField;
@property (readonly, copy, nonatomic) NSString *geoLMRegionID;
@property (readonly, copy, nonatomic) NSURL *supplementalModelURL;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSArray *speechProfileURLs;
@property (readonly, copy, nonatomic) NSDictionary *userIdMask;
@property (readonly, copy, nonatomic) NSString *taskForMemoryLock;
@property (readonly, nonatomic) char atypicalSpeech;
@property (readonly, nonatomic) char enableParallelLoading;
@property (readonly, copy, nonatomic) NSArray *speechProfileContainers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFarField:(char)a0 geoLMRegionID:(id)a1 supplementalModelURL:(id)a2 modelOverrideURL:(id)a3 speechProfileURLs:(id)a4 userIdMask:(id)a5 taskForMemoryLock:(id)a6 atypicalSpeech:(char)a7 enableParallelLoading:(char)a8 speechProfileContainers:(id)a9;

@end
