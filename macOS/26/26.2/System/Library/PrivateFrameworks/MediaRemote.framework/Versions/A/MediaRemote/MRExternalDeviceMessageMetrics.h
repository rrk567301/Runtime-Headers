@class NSString, NSMutableDictionary;

@interface MRExternalDeviceMessageMetrics : NSObject {
    NSString *_path;
    NSMutableDictionary *_entries;
}

- (void)write;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)addMessage:(id)a0 data:(id)a1;

@end
