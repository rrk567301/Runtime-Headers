@class NSObject;
@protocol OS_os_log;

@interface BRCSignpostTracker : NSObject {
    unsigned long long _sid;
    NSObject<OS_os_log> *_log;
    unsigned int _label;
    BOOL _ended;
}

- (id)initWithLabel:(unsigned int)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_startSignpostEvent;
- (void)dropSignpostEvent;
- (void)endSignpostEvent;

@end
