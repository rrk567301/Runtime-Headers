@class NSString, NSArray;

@interface MRCAMLAnimation : NSObject {
    double startTime;
    double duration;
    char removedOnCompletion;
}

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) NSArray *keyframes;

- (void)dealloc;

@end
