@interface AskToCore.ClientPayload : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ val0;
    void /* unknown type, empty encoding */ val1;
    void /* unknown type, empty encoding */ val2;
    void /* unknown type, empty encoding */ val3;
    void /* unknown type, empty encoding */ val4;
    void /* unknown type, empty encoding */ val5;
    void /* unknown type, empty encoding */ val6;
    void /* unknown type, empty encoding */ val7;
    void /* unknown type, empty encoding */ processIdentityData;
    void /* unknown type, empty encoding */ pid;
    void /* unknown type, empty encoding */ bundleIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
