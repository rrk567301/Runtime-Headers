@class NSString;

@interface AVTAvatarDidUpdateAtTimeCallbackItem : NSObject {
    char _firstExecutionHasCompleted;
    double _firstExecutionTime;
    NSString *_key;
    id /* block */ _block;
}

- (void).cxx_destruct;

@end
