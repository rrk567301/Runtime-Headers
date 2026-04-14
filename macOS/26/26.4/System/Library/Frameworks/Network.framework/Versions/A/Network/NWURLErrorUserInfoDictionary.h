@class NWURLError;

@interface NWURLErrorUserInfoDictionary : NSDictionary

@property (retain, nonatomic) NWURLError *error;

- (id)initWithError:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)keyEnumerator;

@end
