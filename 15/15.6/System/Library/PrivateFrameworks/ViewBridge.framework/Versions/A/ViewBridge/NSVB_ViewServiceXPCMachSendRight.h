@interface NSVB_ViewServiceXPCMachSendRight : NSObject <NSSecureCoding> {
    unsigned int _sendRight;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)wrapSendRight:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)sendRight;
- (void)forgetSendRight;

@end
