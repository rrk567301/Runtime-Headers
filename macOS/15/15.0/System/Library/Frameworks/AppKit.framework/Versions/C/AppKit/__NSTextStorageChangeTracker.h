@class NSTextStorage;
@protocol NSObject;

@interface __NSTextStorageChangeTracker : NSObject {
    NSTextStorage *_textStorage;
    struct _NSRange { unsigned long long location; unsigned long long length; } _editedRange;
    id<NSObject> _observer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateEditRange;

@end
