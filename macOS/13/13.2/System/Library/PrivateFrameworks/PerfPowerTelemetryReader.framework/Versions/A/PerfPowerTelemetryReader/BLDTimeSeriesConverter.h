@interface BLDTimeSeriesConverter : NSObject {
    struct unique_ptr<BLD, std::default_delete<BLD>> { struct __compressed_pair<BLD *, std::default_delete<BLD>> { struct BLD *__value_; } __ptr_; } _bld;
    void *_bldLog;
}

+ (id)eventForEntry:(const void *)a0;
+ (id)eventForEntry:(const void *)a0 withKeys:(id)a1;
+ (id)timeSeriesForEntryVector:(const void *)a0;
+ (id)timeSeriesForEntryVector:(const void *)a0 withKeys:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLog:(void *)a0;
- (id)initWithStorageFilepath:(id)a0;
- (id)timeSeriesForEntryType:(int)a0;
- (id)timeSeriesForEntryType:(int)a0 withMetrics:(id)a1;

@end
