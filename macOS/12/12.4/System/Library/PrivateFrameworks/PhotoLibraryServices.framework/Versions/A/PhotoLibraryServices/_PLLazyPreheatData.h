@class NSString, NSData;

@interface _PLLazyPreheatData : NSData {
    NSString *_path;
    NSData *_data;
}

+ (id)dataWithContentsOfFile:(id)a0;

- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (void)_loadData;

@end
