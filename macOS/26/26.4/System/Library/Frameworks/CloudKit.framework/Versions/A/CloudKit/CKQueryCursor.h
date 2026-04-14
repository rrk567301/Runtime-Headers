@class NSData, CKRecordZoneID;

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 zoneID:(id)a1;
- (id)CKPropertiesDescription;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
