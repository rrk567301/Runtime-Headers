@interface GDVUGalleryTransaction : NSObject {
    void /* unknown type, empty encoding */ inner;
}

- (id)init;
- (void).cxx_destruct;
- (char)remove:(long long)a0 error:(id *)a1;
- (char)addWithObservation:(id)a0 context:(id)a1 priority:(long long)a2 at:(long long)a3 output:(long long *)a4 error:(id *)a5;
- (char)removeWithAsset:(id)a0 error:(id *)a1;
- (char)tag:(long long)a0 with:(id)a1 type:(long long)a2 error:(id *)a3;
- (char)untag:(long long)a0 error:(id *)a1;

@end
