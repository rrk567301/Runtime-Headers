@class NSString, NSData, BlastDoorWatchBackground;

@interface BlastDoorBackground : NSObject {
    void /* unknown type, empty encoding */ background;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *poster;
@property (nonatomic, readonly) BlastDoorWatchBackground *watchBackground;

- (id)init;
- (void).cxx_destruct;

@end
