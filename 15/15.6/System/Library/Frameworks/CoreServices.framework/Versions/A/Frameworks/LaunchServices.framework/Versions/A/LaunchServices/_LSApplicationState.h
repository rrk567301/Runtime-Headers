@class NSString;

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _stateFlags;
    int _ratingRank;
    unsigned long long _installType;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long installType;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isInstalled) char installed;
@property (readonly, nonatomic, getter=isPlaceholder) char placeholder;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic, getter=isRestricted) char restricted;
@property (readonly, nonatomic, getter=isRemovedSystemApp) char removedSystemApp;
@property (readonly, nonatomic, getter=isBlocked) char blocked;
@property (readonly, nonatomic, getter=isAlwaysAvailable) char alwaysAvailable;
@property (readonly, nonatomic, getter=isDowngraded) char downgraded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addStateFlag:(unsigned long long)a0;
- (id)initWithBundleIdentifier:(id)a0 stateFlags:(unsigned long long)a1 ratingRank:(int)a2 installType:(unsigned long long)a3;
- (char)isRestrictedWithStateProvider:(id)a0;

@end
