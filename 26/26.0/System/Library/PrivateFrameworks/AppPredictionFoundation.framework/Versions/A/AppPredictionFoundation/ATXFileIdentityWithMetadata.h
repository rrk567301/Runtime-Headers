@class NSString, NSURL, NSData, NSDate;

@interface ATXFileIdentityWithMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *itemURL;
@property (readonly, copy, nonatomic) NSData *bookmarkData;
@property (readonly, copy, nonatomic) NSDate *dateLastOpened;
@property (readonly, copy, nonatomic) NSDate *dateModified;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resolveItemURLWithError:(id *)a0;
- (id)initWithItemURL:(id)a0 bookmarkData:(id)a1 dateLastOpened:(id)a2 dateModified:(id)a3 dateCreated:(id)a4 bundleIdentifier:(id)a5;
- (BOOL)isEqualToATXFileIdentityWithMetadata:(id)a0;

@end
