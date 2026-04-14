@class NSDictionary, NSPasteboard;

@interface VZSpiceAgentPasteboardState : NSObject {
    NSPasteboard *_pasteboard;
    long long _changeCount;
    long long _generatedChangeCount;
    long long _fulfilledChangeCount;
    NSDictionary *_items;
}

- (void).cxx_destruct;

@end
