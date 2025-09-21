@class NSURL, NSString;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {
    struct { unsigned int val[8]; } _sourceAuditToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isImageOrVideo) BOOL imageOrVideo;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *containerOwnerApplicationIdentifier;
@property (readonly, nonatomic, getter=isContentManaged) BOOL contentManaged;
@property (readonly, nonatomic) const struct { unsigned int x0[8]; } *sourceAuditToken;
@property (readonly, nonatomic) BOOL sourceIsManaged;
@property (readonly, nonatomic) const struct { unsigned int x0[8]; } *managedSourceAuditToken;

+ (id)documentProxyForName:(id)a0 type:(id)a1 MIMEType:(id)a2 sourceIsManaged:(BOOL)a3;
+ (id)documentProxyForURL:(id)a0 managedSourceAuditToken:(const struct { unsigned int x0[8]; } *)a1;
+ (id)documentProxyForName:(id)a0 type:(id)a1 MIMEType:(id)a2 isContentManaged:(BOOL)a3 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a4;
+ (id /* block */)_bindingEvaluatorResultFilterForBindingStyle:(unsigned char)a0 contentIsManaged:(BOOL)a1 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a2;
+ (id)documentProxyForURL:(id)a0;
+ (id)documentProxyForName:(id)a0 type:(id)a1 MIMEType:(id)a2;
+ (id)documentProxyForURL:(id)a0 sourceIsManaged:(BOOL)a1;
+ (id)documentProxyForName:(id)a0 type:(id)a1 MIMEType:(id)a2 managedSourceAuditToken:(const struct { unsigned int x0[8]; } *)a3;
+ (id)documentProxyForURL:(id)a0 isContentManaged:(BOOL)a1 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a2;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (id)iconDataForVariant:(int)a0 withOptions:(int)a1;
- (id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id *)a0;
- (id)applicationsAvailableForOpeningFromAirDropWithError:(id *)a0;
- (id)applicationsAvailableForOpeningWithError:(id *)a0;
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)a0 error:(id *)a1;
- (id)applicationsAvailableForOpeningWithStyle:(unsigned char)a0 limit:(unsigned long long)a1 XPCConnection:(id)a2 error:(id *)a3;
- (id)applicationsOrClaimBindings:(BOOL)a0 availableForOpeningWithStyle:(unsigned char)a1 handlerRank:(id)a2 limit:(unsigned long long)a3 XPCConnection:(id)a4 error:(id *)a5;
- (id)availableClaimBindingsForMode:(unsigned char)a0 error:(id *)a1;
- (id)availableClaimBindingsForMode:(unsigned char)a0 handlerRank:(id)a1 error:(id *)a2;
- (id)availableClaimBindingsReturningError:(id *)a0;
- (id)claimBindingsAvailableForOpeningWithStyle:(unsigned char)a0 handlerRank:(id)a1 limit:(unsigned long long)a2 XPCConnection:(id)a3 error:(id *)a4;
- (id)initWithURL:(id)a0 name:(id)a1 type:(id)a2 MIMEType:(id)a3 isContentManaged:(BOOL)a4 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a5;
- (const struct { unsigned int x0[8]; } *)sourceAuditToken;

@end
