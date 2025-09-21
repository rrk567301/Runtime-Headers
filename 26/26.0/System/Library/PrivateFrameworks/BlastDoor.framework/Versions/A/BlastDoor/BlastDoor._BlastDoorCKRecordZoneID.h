@interface BlastDoor._BlastDoorCKRecordZoneID : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ zoneName;
    void /* unknown type, empty encoding */ ownerName;
    void /* unknown type, empty encoding */ anonymousCKUserID;
    void /* unknown type, empty encoding */ databaseScope;
    void /* unknown type, empty encoding */ ZoneNameKey;
    void /* unknown type, empty encoding */ OwnerNameKey;
    void /* unknown type, empty encoding */ AnonymousCKUserIDKey;
    void /* unknown type, empty encoding */ DatabaseScopeKey;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
