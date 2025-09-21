@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)playing;
+ (id)stopped;
+ (id)paused;
+ (id)loading;
+ (id)scanning;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
