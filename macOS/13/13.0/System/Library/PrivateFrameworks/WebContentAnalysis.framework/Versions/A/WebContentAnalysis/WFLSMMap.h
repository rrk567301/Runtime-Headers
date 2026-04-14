@interface WFLSMMap : NSObject {
    struct __LSMMap { } *_lsmMap;
    float _threshold;
}

+ (id)mapWithMap:(struct __LSMMap { } *)a0;
+ (id)mapFromURL:(id)a0;
+ (id)mapFromFilePath:(id)a0;

- (void)dealloc;
- (id)initWithMap:(struct __LSMMap { } *)a0;
- (id)evaluate:(id)a0;
- (long long)numberOfCategories;
- (struct __LSMText { } *)_createLSMTextFromString:(id)a0;
- (id)wordDump:(id)a0;

@end
