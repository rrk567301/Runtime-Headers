@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL fetchNewestChangesFirst;
@property BOOL fetchChangesMadeByThisDevice;
@property (copy) CKServerChangeToken *previousServerChangeToken;
@property unsigned long long resultsLimit;
@property (copy) NSArray *desiredKeys;

+ (void)initialize;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
