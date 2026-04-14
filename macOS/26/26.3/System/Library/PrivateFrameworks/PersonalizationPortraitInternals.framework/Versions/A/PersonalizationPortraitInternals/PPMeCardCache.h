@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (BOOL)writeMeCardCache:(id)a0;
- (id)init;
- (BOOL)deleteMeCardCache;
- (void).cxx_destruct;
- (id)loadMeCardCache;

@end
