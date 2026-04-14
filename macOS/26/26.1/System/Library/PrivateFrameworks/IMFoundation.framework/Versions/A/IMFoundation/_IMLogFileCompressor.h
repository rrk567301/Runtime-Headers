@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)fileCopierDidFinish:(id)a0;
- (void)fileCopierDidStart:(id)a0;
- (void)compressPath:(id)a0 toPath:(id)a1;

@end
