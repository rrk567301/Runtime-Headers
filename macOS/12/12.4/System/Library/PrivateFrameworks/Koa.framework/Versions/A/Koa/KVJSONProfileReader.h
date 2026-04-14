@class NSString, NSDictionary, NSArray, KVProfileInfo;

@interface KVJSONProfileReader : NSObject <KVProfileReader> {
    NSString *_JSON;
    NSDictionary *_profile;
    KVProfileInfo *_profileInfo;
    NSArray *_datasets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)profileInfo;
- (BOOL)enumerateDatasetsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
