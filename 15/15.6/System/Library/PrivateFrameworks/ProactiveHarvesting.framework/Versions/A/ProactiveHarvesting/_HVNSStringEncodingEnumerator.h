@class NSString;

@interface _HVNSStringEncodingEnumerator : NSEnumerator <NSFastEnumeration> {
    NSString *_string;
    unsigned long long _encoding;
    struct _NSRange { unsigned long long location; unsigned long long length; } _remaining;
    char _needsBOM;
    char _needsNullTermination;
}

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithString:(id)a0 encoding:(unsigned long long)a1 nullTerminated:(char)a2;
- (id)nullTerminationIfNeeded;

@end
