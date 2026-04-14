@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteMeCardCache;
- (id)loadMeCardCache;
- (BOOL)writeMeCardCache:(id)a0;

@end
