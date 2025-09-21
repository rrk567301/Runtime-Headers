@class NSString, AAPSyncAppIdentifier, AAPSyncAnchor;

@interface AAPSyncMetaDataItemDelete : NSObject <AAPSyncMetaDataItem, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) AAPSyncAppIdentifier *identifier;
@property (readonly, copy, nonatomic) AAPSyncAnchor *anchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_validate;
- (id)initWithIdentifier:(id)a0 anchor:(id)a1;
- (char)isMetaDataItemDelete;
- (id)scrapeAppInfo;

@end
