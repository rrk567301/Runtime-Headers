@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property char fetchNewestChangesFirst;
@property char fetchChangesMadeByThisDevice;
@property (copy) CKServerChangeToken *previousServerChangeToken;
@property unsigned long long resultsLimit;
@property (copy) NSArray *desiredKeys;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;

@end
