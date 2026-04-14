@class NSString, NSSet;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {
    NSString *_containerID;
    NSSet *_containerClientIDs;
    NSString *_localizedName;
    BOOL _isPristine;
    NSString *_displayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)filename;
- (id)itemIdentifier;
- (id)parentItemIdentifier;
- (id)displayName;
- (id)typeIdentifier;
- (BOOL)isHidden;
- (void)encodeWithCoder:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)capabilities;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)subclassDescription;
- (id)containerDisplayName;
- (id)fp_cloudContainerClientBundleIdentifiers;
- (id)fp_cloudContainerIdentifier;
- (BOOL)fp_isContainer;
- (BOOL)fp_isContainerPristine;
- (id)initWithQueryItem:(id)a0 container:(id)a1 zoneRowID:(id)a2;

@end
