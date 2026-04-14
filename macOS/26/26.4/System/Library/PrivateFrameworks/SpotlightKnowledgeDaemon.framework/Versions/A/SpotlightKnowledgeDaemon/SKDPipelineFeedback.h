@class NSString;

@interface SKDPipelineFeedback : NSObject <SKDFeedback>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long indexType;
@property (readonly, nonatomic) NSString *pipeline;
@property (readonly, nonatomic) NSString *job;
@property (readonly, nonatomic) NSString *journalCookie;
@property (nonatomic) long long serialNumber;
@property (readonly, nonatomic) NSString *textContentLanguage;
@property (nonatomic) unsigned long long textContentLength;
@property (nonatomic) unsigned long long embeddingsCount;
@property (nonatomic) unsigned long long keyphrasesCount;
@property (nonatomic) unsigned long long breadcrumbsCount;
@property (nonatomic) unsigned long long locationsCount;
@property (nonatomic) unsigned long long pirCount;
@property (nonatomic) unsigned long long receiverProcessedCount;
@property (nonatomic) BOOL hasProcessingResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (id)initWithPipeline:(id)a0 bundleID:(id)a1 journalCookie:(id)a2 serialNumber:(long long)a3 indexType:(unsigned long long)a4;
- (id)initWithBundleID:(id)a0 language:(id)a1 length:(unsigned long long)a2;
- (id)initWithBundleID:(id)a0 pipeline:(id)a1 job:(id)a2;
- (id)initWithFilePath:(id)a0 language:(id)a1 length:(unsigned long long)a2;
- (id)initWithPipeline:(id)a0 bundleID:(id)a1 indexType:(unsigned long long)a2;

@end
