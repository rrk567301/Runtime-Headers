@class NSString, AAPSyncAppIdentifier, AAPSyncAnchor;

@interface AAPSyncMetaDataItemDelete : NSObject <AAPSyncMetaDataItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AAPSyncAppIdentifier *identifier;
@property (readonly, copy, nonatomic) AAPSyncAnchor *anchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_validate;
- (id)initWithIdentifier:(id)a0 anchor:(id)a1;
- (BOOL)isMetaDataItemDelete;
- (id)scrapeAppInfo;

@end
