@interface _ACComponentVector : NSObject <NSSecureCoding> {
    struct AudioComponentVector { void *__begin_; void *__end_; struct { void *__cap_; } ; BOOL mSorted; } mVector;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithVector:(const void *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;

@end
