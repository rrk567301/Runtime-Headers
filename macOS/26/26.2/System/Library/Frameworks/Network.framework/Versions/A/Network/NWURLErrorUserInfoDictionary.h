@class NWURLError;

@interface NWURLErrorUserInfoDictionary : NSDictionary

@property (retain, nonatomic) NWURLError *error;

- (unsigned long long)count;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;

@end
