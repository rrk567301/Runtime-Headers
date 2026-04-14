@class NSArray, NSDictionary, NSURL, NSString;

@interface _SFSpeechRecognizerModelOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL farField;
@property (readonly, copy, nonatomic) NSURL *supplementalModelURL;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSArray *speechProfileURLs;
@property (readonly, copy, nonatomic) NSDictionary *userIdMask;
@property (readonly, copy, nonatomic) NSString *taskForMemoryLock;
@property (readonly, nonatomic) BOOL atypicalSpeech;
@property (readonly, nonatomic) BOOL enableParallelLoading;
@property (readonly, copy, nonatomic) NSArray *speechProfileContainers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFarField:(BOOL)a0 supplementalModelURL:(id)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 userIdMask:(id)a4 taskForMemoryLock:(id)a5 atypicalSpeech:(BOOL)a6 enableParallelLoading:(BOOL)a7 speechProfileContainers:(id)a8;

@end
