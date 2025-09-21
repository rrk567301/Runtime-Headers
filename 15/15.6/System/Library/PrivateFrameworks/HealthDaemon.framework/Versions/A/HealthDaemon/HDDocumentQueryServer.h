@class NSArray;

@interface HDDocumentQueryServer : HDQueryServer {
    char _suspended;
    NSArray *_authorizedSamples;
    unsigned long long _clientSampleIndex;
}

@property (readonly, nonatomic) unsigned long long maxResults;
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) char includeDocumentData;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (char)validateConfiguration:(id *)a0;

@end
