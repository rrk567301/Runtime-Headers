@class ATXHeuristicDevice;

@interface ATXCallHistoryDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)_dictForHandle:(id)a0;
- (id)_dictForCall:(id)a0;
- (void)callNewerThan:(double)a0 showIncoming:(char)a1 showOutgoing:(char)a2 missedOnly:(char)a3 callback:(id /* block */)a4;

@end
