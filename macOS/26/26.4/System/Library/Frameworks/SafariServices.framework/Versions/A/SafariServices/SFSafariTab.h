@class NSUUID, SFSafariExtensionContext;

@interface SFSafariTab : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_uuid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *_uuid;
@property (retain, nonatomic) SFSafariExtensionContext *_extensionContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_remoteObjectProxy;
- (void)close;
- (void)activateWithCompletionHandler:(id /* block */)a0;
- (id)_initWithUUID:(id)a0;
- (void)getActivePageWithCompletionHandler:(id /* block */)a0;
- (void)getContainingWindowWithCompletionHandler:(id /* block */)a0;
- (void)getPagesWithCompletionHandler:(id /* block */)a0;
- (void)navigateToURL:(id)a0;

@end
