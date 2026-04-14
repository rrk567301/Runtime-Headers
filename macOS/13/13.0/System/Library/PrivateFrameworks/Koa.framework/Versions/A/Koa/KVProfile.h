@class NSObject;
@protocol KVProfileReader;

@interface KVProfile : NSObject {
    NSObject<KVProfileReader> *_profileReader;
}

+ (id)profileWithContentsOfURL:(id)a0 error:(id *)a1;
+ (void)initalize;

- (id)description;
- (void).cxx_destruct;
- (id)profileInfo;
- (BOOL)donateWithServiceProvider:(id)a0 error:(id *)a1;
- (BOOL)enumerateDatasetsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)_donatorForDataset:(id)a0 serviceProvider:(id)a1 error:(id *)a2;
- (id)initWithProfileData:(id)a0 error:(id *)a1;
- (id)initWithProfileData:(id)a0 provider:(id)a1 error:(id *)a2;

@end
