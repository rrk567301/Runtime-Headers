@class CBRTPLCParams, NSObject;
@protocol OS_os_log;

@interface CBBacklightNode : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (readonly) CBRTPLCParams *rtplc;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;

@end
