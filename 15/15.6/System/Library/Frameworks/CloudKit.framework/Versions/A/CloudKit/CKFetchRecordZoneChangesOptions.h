@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property char fetchNewestChangesFirst;
@property char fetchChangesMadeByThisDevice;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithZoneConfiguration:(id)a0;
- (id)zoneConfiguration;

@end
