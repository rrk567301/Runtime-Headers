@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (BOOL)deleteMeCardCache;
- (BOOL)writeMeCardCache:(id)a0;
- (void).cxx_destruct;
- (id)loadMeCardCache;
- (id)init;

@end
