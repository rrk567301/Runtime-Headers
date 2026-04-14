@interface _UNMachSendRight : NSObject <NSSecureCoding> {
    unsigned int _sendRight;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapSendRight:(unsigned int)a0 transferOwnership:(BOOL)a1;

- (void)invalidate;
- (id)initWithCoder:(id)a0;
- (unsigned int)sendRight;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (unsigned long long)portRefs;

@end
