@class NSString;

@interface TVPPlaybackState : NSObject

@property (retain, nonatomic) NSString *name;

+ (id)scanning;
+ (id)loading;
+ (id)playing;
+ (id)paused;
+ (id)stopped;

- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
