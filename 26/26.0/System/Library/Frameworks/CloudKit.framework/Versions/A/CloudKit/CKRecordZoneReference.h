@class NSString, CKRecordZoneID;

@interface CKRecordZoneReference : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, readonly) unsigned long long referenceAction;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithZone:(id)a0 action:(unsigned long long)a1;
- (id)initWithZoneID:(id)a0 action:(unsigned long long)a1;

@end
