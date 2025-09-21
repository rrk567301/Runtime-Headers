@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)scanning;
+ (id)paused;
+ (id)loading;
+ (id)playing;
+ (id)stopped;

- (id)init;
- (id)description;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
