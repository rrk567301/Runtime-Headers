@class ATXHeuristicDevice;

@interface ATXFocusModeDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)isFocusModeActive:(id /* block */)a0;
- (void).cxx_destruct;

@end
