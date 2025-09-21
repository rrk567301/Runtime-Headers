@class NSString, FPItem, NSURL, NSObject;

@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding> {
    NSObject *_object;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isExternalURL;
@property (readonly, nonatomic) char isProviderItem;
@property (readonly, nonatomic) FPItem *asFPItem;
@property (readonly, nonatomic) NSURL *asURL;
@property (readonly, nonatomic) id underlyingObject;
@property (readonly, nonatomic) id identifier;
@property (readonly, nonatomic) id parentIdentifier;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) char isFolder;
@property (readonly, nonatomic) char requiresCrossDeviceCopy;

+ (id)locatorForItem:(id)a0;
+ (id)locatorForURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setObject:(id)a0;
- (char)isDownloaded;
- (void)attachSandboxExtensionOnXPCEncoding;

@end
