@interface NCMachSendRight : NSObject <NSSecureCoding> {
    unsigned int _sendRight;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapSendRight:(unsigned int)a0 transferOwnership:(BOOL)a1;

- (void)invalidate;
- (unsigned int)sendRight;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)portRefs;

@end
