@class NSArray, NWNetworkAdviceUpdate, NSDate, NSPredicate;

@interface NWNetworkOfInterest : NSObject <NSSecureCoding, NSCopying> {
    char _isThinnedOut;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long version;
@property (readonly) long long scopedToLOI;
@property (readonly) long long flags;
@property (readonly) unsigned char functionalInterfaceType;
@property char isTrafficEligible;
@property char willGetDiscretionaryTrafficInvites;
@property char discretionaryTrafficInvited;
@property long long interfaceClass;
@property long long considerAlternate;
@property (retain) NWNetworkAdviceUpdate *considerAlternateUpdate;
@property long long linkQuality;
@property long long powerCostDL;
@property long long powerCostUL;
@property (retain) NSDate *predictionsGeneratedAt;
@property (retain) NSArray *predictions;
@property (readonly) long long interface;
@property (readonly) long long interfaceSubtype;
@property (readonly) char isAny;
@property (readonly) char isBuiltin;
@property (readonly) NSPredicate *customSignature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)atHomeScopedNOI;
- (char)atWorkScopedNOI;
- (id)typePrettyPrint;
- (id)_descriptionFull:(char)a0;
- (char)_isEqualToNOI:(id)a0;
- (id)_thinCopy;
- (void)addObserverForAllKeyPaths:(id)a0;
- (id)identityAttrsOnly;
- (id)initWithSpec:(unsigned char)a0 isAny:(char)a1 isBuiltin:(char)a2 scopedToLOI:(long long)a3 flags:(long long)a4 hasCustomSignature:(id)a5;
- (void)removeObserverForAllKeyPaths:(id)a0;

@end
