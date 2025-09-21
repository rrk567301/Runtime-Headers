@class NSString, NSSet;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {
    NSString *_containerID;
    NSSet *_containerClientIDs;
    NSString *_localizedName;
    char _isPristine;
    NSString *_displayName;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isHidden;
- (id)itemIdentifier;
- (id)displayName;
- (id)typeIdentifier;
- (id)filename;
- (unsigned long long)capabilities;
- (id)containerDisplayName;
- (id)fp_cloudContainerClientBundleIdentifiers;
- (id)fp_cloudContainerIdentifier;
- (char)fp_isContainer;
- (char)fp_isContainerPristine;
- (id)initWithQueryItem:(id)a0 container:(id)a1 zoneRowID:(id)a2;
- (id)parentItemIdentifier;
- (id)subclassDescription;

@end
