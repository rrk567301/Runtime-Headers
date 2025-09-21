@class NSObject;
@protocol CKVAdminService;

@interface CKVocabularyAdminEventSimulator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    double _timeout;
    char _simulationFinished;
}

- (void)dealloc;
- (void).cxx_destruct;
- (long long)finish;
- (void)handleTask:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (id)initWithAdminService:(id)a0;
- (id)initWithAdminService:(id)a0 timeout:(double)a1;

@end
