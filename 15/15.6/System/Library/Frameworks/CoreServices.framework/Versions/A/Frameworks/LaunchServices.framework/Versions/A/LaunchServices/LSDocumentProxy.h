@class NSURL, NSString;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {
    struct { unsigned int val[8]; } _sourceAuditToken;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=isImageOrVideo) char imageOrVideo;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *containerOwnerApplicationIdentifier;
@property (readonly, nonatomic, getter=isContentManaged) char contentManaged;
@property (readonly, nonatomic) const struct { unsigned int x0[8]; } *sourceAuditToken;
@property (readonly, nonatomic) char sourceIsManaged;
@property (readonly, nonatomic) const struct { unsigned int x0[8]; } *managedSourceAuditToken;

+ (id)documentProxyForName:(id)a0 type:(id)a1 MIMEType:(id)a2;
+ (id)documentProxyForName:(id)a0 type:(id)a1 MIMEType:(id)a2 isContentManaged:(char)a3 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a4;
+ (id)documentProxyForName:(id)a0 type:(id)a1 MIMEType:(id)a2 managedSourceAuditToken:(const struct { unsigned int x0[8]; } *)a3;
+ (id)documentProxyForName:(id)a0 type:(id)a1 MIMEType:(id)a2 sourceIsManaged:(char)a3;
+ (id)documentProxyForURL:(id)a0;
+ (id)documentProxyForURL:(id)a0 isContentManaged:(char)a1 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a2;
+ (id)documentProxyForURL:(id)a0 managedSourceAuditToken:(const struct { unsigned int x0[8]; } *)a1;
+ (id)documentProxyForURL:(id)a0 sourceIsManaged:(char)a1;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)iconDataForVariant:(int)a0 withOptions:(int)a1;
- (struct optional<LaunchServices::BindingEvaluator> { union { char x0; struct BindingEvaluator { id x0; id x1; id x2; id x3; id x4; unsigned int x5; id x6; struct LSVersionNumber { unsigned char x0[32]; } x7; id x8; char x9; char x10; unsigned long long x11; unsigned int x12; unsigned int x13; struct vector<LSBundleClass, std::allocator<LSBundleClass>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<LSBundleClass *, std::allocator<LSBundleClass>> { unsigned int *x0; } x2; } x14; id /* block */ x15; id x16; id /* block */ x17; id x18; } x1; } x0; BOOL x1; })_bindingEvaluatorWithAuditToken:(const struct { unsigned int x0[8]; } *)a0;
- (id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id *)a0;
- (id)applicationsAvailableForOpeningFromAirDropWithError:(id *)a0;
- (id)applicationsAvailableForOpeningWithError:(id *)a0;
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)a0 error:(id *)a1;
- (id)applicationsAvailableForOpeningWithStyle:(unsigned char)a0 limit:(unsigned long long)a1 XPCConnection:(id)a2 error:(id *)a3;
- (id)applicationsOrClaimBindings:(char)a0 availableForOpeningWithStyle:(unsigned char)a1 handlerRank:(id)a2 limit:(unsigned long long)a3 XPCConnection:(id)a4 error:(id *)a5;
- (id)availableClaimBindingsForMode:(unsigned char)a0 error:(id *)a1;
- (id)availableClaimBindingsForMode:(unsigned char)a0 handlerRank:(id)a1 error:(id *)a2;
- (id)availableClaimBindingsReturningError:(id *)a0;
- (id)claimBindingsAvailableForOpeningWithStyle:(unsigned char)a0 handlerRank:(id)a1 limit:(unsigned long long)a2 XPCConnection:(id)a3 error:(id *)a4;
- (id)initWithURL:(id)a0 name:(id)a1 type:(id)a2 MIMEType:(id)a3 isContentManaged:(char)a4 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a5;
- (const struct { unsigned int x0[8]; } *)sourceAuditToken;
- (id)uniqueIdentifier;

@end
