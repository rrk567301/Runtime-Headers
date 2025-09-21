@interface _UNMachSendRight : NSObject <NSSecureCoding> {
    unsigned int _sendRight;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapSendRight:(unsigned int)a0 transferOwnership:(BOOL)a1;

- (unsigned int)sendRight;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)portRefs;

@end
