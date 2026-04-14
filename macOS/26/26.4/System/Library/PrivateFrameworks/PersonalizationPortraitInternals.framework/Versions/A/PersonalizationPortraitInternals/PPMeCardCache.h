@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)loadMeCardCache;
- (BOOL)deleteMeCardCache;
- (void).cxx_destruct;
- (BOOL)writeMeCardCache:(id)a0;
- (id)init;

@end
