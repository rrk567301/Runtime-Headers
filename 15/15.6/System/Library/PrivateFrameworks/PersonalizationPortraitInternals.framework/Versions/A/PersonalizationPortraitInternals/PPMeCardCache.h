@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)init;
- (void).cxx_destruct;
- (id)loadMeCardCache;
- (char)deleteMeCardCache;
- (char)writeMeCardCache:(id)a0;

@end
