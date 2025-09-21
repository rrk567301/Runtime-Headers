@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    NSString *_uniqueIdentifier;
    FBSDisplayIdentity *_rootIdentity;
    long long _type;
    long long _connectionType;
    unsigned int _displayID;
    unsigned int _connectionSeed;
    char _secure;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isUIKitMainLike) char UIKitMainLike;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *rootIdentity;
@property (readonly, nonatomic) char isRootIdentity;
@property (readonly, nonatomic, getter=isMainDisplay) char mainDisplay;
@property (readonly, nonatomic, getter=isExternal) char external;
@property (readonly, nonatomic, getter=isCarDisplay) char carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) char carInstrumentsDisplay;
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
- (long long)type;
- (long long)connectionType;
- (id)uniqueIdentifier;
- (unsigned int)displayID;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (unsigned int)connectionSeed;
- (id)_initWithType:(long long)a0 UIKitMainLike:(char)a1 displayID:(unsigned int)a2 connectionType:(long long)a3 connectionSeed:(unsigned int)a4 pid:(int)a5 external:(char)a6 uniqueIdentifier:(id)a7 secure:(char)a8 root:(id)a9;
- (char)expectsSecureRendering;
- (char)isAirPlayDisplay;
- (char)isContinuityDisplay;
- (char)isMainRootDisplay;
- (char)isMusicOnlyDisplay;
- (char)isRestrictedAirPlayDisplay;
- (char)isVirtualized;
- (char)isiPodOnlyDisplay;

@end
