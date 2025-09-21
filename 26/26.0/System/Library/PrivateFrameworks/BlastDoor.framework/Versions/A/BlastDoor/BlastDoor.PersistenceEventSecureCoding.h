@interface BlastDoor.PersistenceEventSecureCoding : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ persistenceEvent;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
