@class NSString;

@interface BMPathEnumerator : NSObject {
    NSString *_path;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (id)navigateUp;
- (void).cxx_destruct;
- (id)peekPath;
- (id)initWithPath:(id)a0;
- (id)navigateDown;

@end
