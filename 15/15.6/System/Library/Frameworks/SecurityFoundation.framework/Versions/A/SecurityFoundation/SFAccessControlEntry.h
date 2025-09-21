@class NSString;

@interface SFAccessControlEntry : NSObject <NSCopying, NSSecureCoding> {
    id _accessControlEntryInternal;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic, getter=isOwner) char owner;
@property (nonatomic) char canRead;
@property (nonatomic) char canWrite;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 owner:(char)a1 canRead:(char)a2 canWrite:(char)a3;

@end
