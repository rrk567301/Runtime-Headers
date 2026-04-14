@class CKVIndexManager, CKVSettings;

@interface CKVIndexUpdaterFactory : NSObject {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
    double _timeout;
}

- (void).cxx_destruct;
- (id)initWithIndexManager:(id)a0 settings:(id)a1 timeout:(double)a2;
- (id)updaterForRequest:(id)a0;

@end
