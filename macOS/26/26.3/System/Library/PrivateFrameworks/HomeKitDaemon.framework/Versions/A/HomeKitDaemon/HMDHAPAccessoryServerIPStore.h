@class NSURL;

@interface HMDHAPAccessoryServerIPStore : HMFObject

@property (readonly, nonatomic) NSURL *url;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (BOOL)writeDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryFromStoreWithError:(id *)a0;
- (id)initWithPath:(id)a0 andFilename:(id)a1;

@end
