@interface _ACComponentVector : NSObject <NSSecureCoding> {
    struct AudioComponentVector { void *__begin_; void *__end_; void *__cap_; BOOL mSorted; } mVector;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithVector:(const void *)a0;
- (void).cxx_destruct;

@end
