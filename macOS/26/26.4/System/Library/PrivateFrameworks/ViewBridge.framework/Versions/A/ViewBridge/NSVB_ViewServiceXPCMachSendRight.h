@interface NSVB_ViewServiceXPCMachSendRight : NSObject <NSSecureCoding> {
    unsigned int _sendRight;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapSendRight:(unsigned int)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned int)sendRight;
- (void)forgetSendRight;

@end
