@class NSString;

@interface GEOExperimentFetchBucketIDReply : GEOXPCReply <GEOXPCReply>

@property (nonatomic) int bucket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (BOOL)isValid;
- (void)encodeToXPCDictionary:(id)a0;

@end
