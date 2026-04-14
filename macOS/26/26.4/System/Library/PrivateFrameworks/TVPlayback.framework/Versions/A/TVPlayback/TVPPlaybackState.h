@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)paused;
+ (id)scanning;
+ (id)playing;
+ (id)stopped;
+ (id)loading;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;

@end
