@interface AFKUserSystemService : NSObject {
    unsigned int _service;
}

@property (readonly, nonatomic) unsigned long long regID;

+ (id)withService:(unsigned int)a0;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (id)copyMatchedServiceProperties:(id)a0 key:(id)a1 error:(id *)a2;
- (id)registry:(id *)a0;
- (BOOL)setMatchedServiceProperties:(id)a0 proprties:(id)a1 error:(id *)a2;

@end
