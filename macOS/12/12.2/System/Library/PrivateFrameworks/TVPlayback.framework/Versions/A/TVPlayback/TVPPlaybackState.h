@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)stopped;
+ (id)paused;
+ (id)playing;
+ (id)loading;
+ (id)scanning;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
