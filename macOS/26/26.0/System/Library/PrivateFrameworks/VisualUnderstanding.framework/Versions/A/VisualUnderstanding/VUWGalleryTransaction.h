@interface VUWGalleryTransaction : NSObject {
    void /* unknown type, empty encoding */ transaction;
}

- (void).cxx_destruct;
- (BOOL)removeWithAsset:(id)a0 error:(id *)a1;
- (BOOL)tag:(id)a0 with:(id)a1 type:(long long)a2 error:(id *)a3;
- (BOOL)untag:(id)a0 error:(id *)a1;
- (id)addWithObservation:(id)a0 context:(id)a1 priority:(long long)a2 at:(id)a3 error:(id *)a4;
- (BOOL)removeWithObservationIdentifier:(id)a0 error:(id *)a1;

@end
