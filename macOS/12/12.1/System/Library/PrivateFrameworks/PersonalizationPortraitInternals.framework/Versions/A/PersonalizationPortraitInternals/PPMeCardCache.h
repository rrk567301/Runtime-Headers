@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)init;
- (void).cxx_destruct;
- (id)loadMeCardCache;
- (BOOL)writeMeCardCache:(id)a0;
- (BOOL)deleteMeCardCache;

@end
