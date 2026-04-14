@class NSUUID, SFSafariExtensionContext;

@interface SFSafariWindow : NSObject <NSCopying, NSSecureCoding> {
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
- (id)_initWithUUID:(id)a0;
- (void)getActiveTabWithCompletionHandler:(id /* block */)a0;
- (void)getAllTabsWithCompletionHandler:(id /* block */)a0;
- (void)getToolbarItemWithCompletionHandler:(id /* block */)a0;
- (void)openTabWithURL:(id)a0 makeActiveIfPossible:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
