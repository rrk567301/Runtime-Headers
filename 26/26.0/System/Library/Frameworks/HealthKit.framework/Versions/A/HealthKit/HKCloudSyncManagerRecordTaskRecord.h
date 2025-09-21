@class NSString;

@interface HKCloudSyncManagerRecordTaskRecord : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ ownerID;
    void /* function */ zoneID;
    void /* function */ recordID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *ownerID;
@property (nonatomic, copy) NSString *zoneID;
@property (nonatomic, copy) NSString *recordID;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOwnerID:(id)a0 zoneID:(id)a1 recordID:(id)a2;

@end
