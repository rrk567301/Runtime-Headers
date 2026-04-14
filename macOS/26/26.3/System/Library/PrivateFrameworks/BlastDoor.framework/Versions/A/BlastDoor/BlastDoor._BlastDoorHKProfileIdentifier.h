@interface BlastDoor._BlastDoorHKProfileIdentifier : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ UuidKey;
    void /* unknown type, empty encoding */ TypeKey;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
