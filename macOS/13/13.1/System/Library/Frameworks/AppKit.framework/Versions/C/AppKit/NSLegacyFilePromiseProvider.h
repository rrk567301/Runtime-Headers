@class NSArray, NSValue;

@interface NSLegacyFilePromiseProvider : NSObject {
    BOOL _isPromiseValid;
    NSValue *_weakPasteboard;
}

@property (copy) NSArray *filePromiseProviders;

- (void)dealloc;
- (id)initWithPasteboard:(id)a0;
- (void)draggingEnded:(id)a0;
- (void)pasteboard:(id)a0 provideDataForType:(id)a1;
- (void)pasteboardFinishedWithDataProvider:(id)a0;
- (void)draggingCancelled:(id)a0;

@end
