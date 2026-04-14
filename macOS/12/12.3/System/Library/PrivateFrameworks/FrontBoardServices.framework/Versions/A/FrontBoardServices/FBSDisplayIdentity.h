@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    long long _type;
    unsigned int _displayID;
    unsigned int _connectionSeed;
    NSString *_uniqueIdentifier;
    FBSDisplayIdentity *_rootIdentity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *rootIdentity;
@property (readonly, nonatomic) BOOL isRootIdentity;
@property (readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)uniqueIdentifier;
- (unsigned int)displayID;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (unsigned int)connectionSeed;
- (id)_initWithType:(long long)a0 displayID:(unsigned int)a1 connectionSeed:(unsigned int)a2 pid:(int)a3 external:(BOOL)a4 uniqueIdentifier:(id)a5 secure:(BOOL)a6 root:(id)a7;
- (BOOL)expectsSecureRendering;
- (BOOL)isMainRootDisplay;
- (BOOL)isAirPlayDisplay;
- (BOOL)isRestrictedAirPlayDisplay;
- (BOOL)isiPodOnlyDisplay;
- (BOOL)isMusicOnlyDisplay;

@end
