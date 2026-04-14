@class NSString;

@interface ADHistory : NSObject {
    void *_database;
}

@property (readonly, nonatomic) NSString *path;

@end
