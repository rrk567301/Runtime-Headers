@class NSString, NSData;

@interface CalTruthFileDataWrite : NSObject <CalTruthFileMethod> {
    NSString *_path;
    NSData *_data;
}

+ (id)methodWithPath:(id)a0 data:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithPath:(id)a0 data:(id)a1;

@end
