@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)loading;
+ (id)playing;
+ (id)scanning;
+ (id)paused;
+ (id)stopped;

- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
