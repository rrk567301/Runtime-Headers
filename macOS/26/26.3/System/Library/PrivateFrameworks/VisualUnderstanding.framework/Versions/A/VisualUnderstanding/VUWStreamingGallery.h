@interface VUWStreamingGallery : NSObject {
    void /* unknown type, empty encoding */ streamingGallery;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)resetAndReturnError:(id *)a0;
- (id)updateWithMaxKeyFacesPerCluster:(id)a0 sortBy:(id)a1 error:(id *)a2;
- (id)addObservation:(id)a0 tag:(id)a1 error:(id *)a2;
- (id)addObservations:(id)a0 tag:(id)a1 error:(id *)a2;
- (id)initWithPath:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)recognizeWithObservation:(id)a0 k:(id)a1 confirmedOnly:(BOOL)a2 error:(id *)a3;
- (BOOL)updateAndReturnError:(id *)a0;

@end
