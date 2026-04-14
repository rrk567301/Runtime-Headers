@interface CoreIDVShared.NFCPendingCommandsStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isReady;
    void /* unknown type, empty encoding */ retryInterval;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
