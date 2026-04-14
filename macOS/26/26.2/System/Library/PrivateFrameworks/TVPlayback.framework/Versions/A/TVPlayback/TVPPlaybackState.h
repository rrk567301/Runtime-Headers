@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)paused;
+ (id)loading;
+ (id)scanning;
+ (id)playing;
+ (id)stopped;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (id)init;

@end
