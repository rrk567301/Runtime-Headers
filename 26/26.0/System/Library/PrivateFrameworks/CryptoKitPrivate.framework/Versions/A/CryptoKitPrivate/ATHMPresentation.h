@class NSData;

@interface ATHMPresentation : NSObject

@property (readonly, retain, nonatomic) NSData *presentationData;
@property (readonly, nonatomic) unsigned long long nbuckets;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0 responseData:(id)a1 nbuckets:(long long)a2 error:(id *)a3;

@end
