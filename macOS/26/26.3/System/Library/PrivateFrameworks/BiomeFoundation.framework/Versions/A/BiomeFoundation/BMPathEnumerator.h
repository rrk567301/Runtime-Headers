@class NSString;

@interface BMPathEnumerator : NSObject {
    NSString *_path;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (id)navigateDown;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)navigateUp;
- (id)peekPath;

@end
