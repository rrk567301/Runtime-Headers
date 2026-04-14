@interface BlastDoor._BlastDoorCKRecordID : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ recordName;
    void /* unknown type, empty encoding */ zoneID;
    void /* unknown type, empty encoding */ RecordNameKey;
    void /* unknown type, empty encoding */ ZoneIDKey;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
