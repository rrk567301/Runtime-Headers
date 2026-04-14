@class NSData, CKRecordZoneID;

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;

+ (void)initialize;

- (id)CKPropertiesDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 zoneID:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
