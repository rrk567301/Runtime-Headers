@class BMStreamDatastore;

@interface FSFBiomeFeatureStoreStream : NSObject <FSFFeatureStoreStream>

@property (retain, nonatomic) BMStreamDatastore *writeStore;
@property (retain, nonatomic) BMStreamDatastore *readStore;
@property (retain, nonatomic) BMStreamDatastore *pruneStore;

- (void).cxx_destruct;
- (id)retrieve:(id)a0;
- (BOOL)deleteCurrentStream;
- (BOOL)insert:(id)a0 withInteractionId:(id)a1 atTime:(double)a2;
- (id)retrieveEvents:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithConfig:(id)a0 streamId:(id)a1;

@end
