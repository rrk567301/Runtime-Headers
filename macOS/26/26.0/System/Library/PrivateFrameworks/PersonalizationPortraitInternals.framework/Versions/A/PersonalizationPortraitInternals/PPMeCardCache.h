@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (BOOL)deleteMeCardCache;
- (BOOL)writeMeCardCache:(id)a0;
- (id)init;
- (id)loadMeCardCache;
- (void).cxx_destruct;

@end
