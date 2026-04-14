@class NSUUID, NSMutableDictionary, NSString;

@interface HMDApplicationData : HMFObject <HMFLogging, NSSecureCoding, NSCopying, HMDDumpState>

@property (class, readonly) unsigned long long sizeLimit;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSMutableDictionary *appDataDictionary;
@property (copy, nonatomic) NSUUID *parentUUID;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (void)removeApplicationDataForIdentifier:(id)a0;
- (void)setApplicationData:(id)a0 forIdentifier:(id)a1;
- (void)encodeForXPCTransportWithCoder:(id)a0 key:(id)a1;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (void)updateParentUUIDIfNil:(id)a0;
- (id)initWithParentUUID:(id)a0;
- (id)initWithDictionary:(id)a0 parentUUID:(id)a1;
- (id)applicationDataForIdentifier:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateWithModel:(id)a0;

@end
