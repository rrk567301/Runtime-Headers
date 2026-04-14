@class NSString;

@interface _LSStackBacktrace : NSObject <NSCopying, NSSecureCoding> {
    struct vector<void *, std::allocator<void *>> { void **__begin_; void **__end_; void **__cap_; } _frames;
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *backtraceString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithBacktrace;
- (id)initWithFrames:(void **)a0 count:(unsigned long long)a1;

@end
