@class NSString;
@protocol NSObject;

@interface _NSScrollingPerfLogger : NSObject {
    unsigned long long _signpostId;
    NSString *_scrollViewToken;
    id<NSObject> _activityToken;
}

+ (id)beginLoggingScrollGestureWithScrollView:(id)a0;

- (void)dealloc;

@end
