@class NSString, NSSet;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {
    NSString *_containerID;
    NSSet *_containerClientIDs;
    NSString *_localizedName;
    BOOL _isPristine;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemIdentifier;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)displayName;
- (id)typeIdentifier;
- (id)filename;
- (unsigned long long)capabilities;
- (id)containerDisplayName;
- (id)parentItemIdentifier;
- (id)subclassDescription;
- (id)initWithQueryItem:(id)a0 container:(id)a1 zoneRowID:(id)a2;
- (BOOL)fp_isContainer;
- (BOOL)fp_isContainerPristine;
- (id)fp_cloudContainerIdentifier;
- (id)fp_cloudContainerClientBundleIdentifiers;

@end
