@class NSString;

@interface HMAccessoryCategory : NSObject <HMFDumpState, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly) char isWiFiRouterAccessoryCategory;
@property (readonly) char isTelevisionAccessoryCategory;
@property (readonly, copy) NSString *categoryType;
@property (readonly, copy) NSString *localizedDescription;
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
- (id)uniqueIdentifier;
- (id)initWithType:(id)a0 name:(id)a1;
- (id)dumpState;
- (id)localizedDescriptionPlural;

@end
