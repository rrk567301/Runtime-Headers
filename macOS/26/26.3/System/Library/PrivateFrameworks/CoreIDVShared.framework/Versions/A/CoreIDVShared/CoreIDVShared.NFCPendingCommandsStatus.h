@interface CoreIDVShared.NFCPendingCommandsStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isReady;
    void /* unknown type, empty encoding */ retryInterval;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
