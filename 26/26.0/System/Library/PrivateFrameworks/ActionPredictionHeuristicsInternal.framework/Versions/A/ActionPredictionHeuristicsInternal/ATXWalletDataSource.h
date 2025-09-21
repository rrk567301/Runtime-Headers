@class ATXHeuristicDevice;

@interface ATXWalletDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void)passesWithStyle:(id)a0 callback:(id /* block */)a1;
- (id)initWithDevice:(id)a0;
- (unsigned long long)_getPassStyleMaskForString:(id)a0;
- (id)_extractRelevantSemanticTagsFromPass:(id)a0;
- (void).cxx_destruct;

@end
