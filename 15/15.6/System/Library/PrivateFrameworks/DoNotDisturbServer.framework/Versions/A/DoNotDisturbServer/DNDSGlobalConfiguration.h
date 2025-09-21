@class NSString, DNDBypassSettings, NSDate;

@interface DNDSGlobalConfiguration : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long preventAutoReply;
@property (readonly, copy, nonatomic) DNDBypassSettings *bypassSettings;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic, getter=isAutomaticallyGenerated) char automaticallyGenerated;
@property (readonly, nonatomic) unsigned long long modesCanImpactAvailability;

+ (id)backingStoreWithFileURL:(id)a0;
+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithConfiguration:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)initWithPreventAutoReply:(unsigned long long)a0 bypassSettings:(id)a1 modesCanImpactAvailability:(unsigned long long)a2 lastModified:(id)a3 automaticallyGenerated:(char)a4;
- (id)mergeWithGlobalConfiguration:(id)a0;

@end
