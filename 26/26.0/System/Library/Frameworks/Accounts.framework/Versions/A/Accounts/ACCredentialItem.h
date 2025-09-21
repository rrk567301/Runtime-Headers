@class NSString, NSURL, NSDate, ACAccountStore, NSMutableSet;

@interface ACCredentialItem : NSObject <NSSecureCoding, ACProtobufCoding> {
    NSString *_accountIdentifier;
    NSDate *_expirationDate;
    NSString *_serviceName;
    BOOL _persistent;
    NSURL *_objectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *accountIdentifier;
@property (retain) NSDate *expirationDate;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSString *serviceName;
@property (getter=isPersistent) BOOL persistent;
@property (retain) NSURL *objectID;
@property (weak) ACAccountStore *accountStore;
@property (readonly, getter=isDirty) BOOL dirty;
@property (readonly) NSMutableSet *dirtyProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAccountIdentifier:(id)a0;
- (id)_encodeProtobufData;
- (id)_initWithProtobufData:(id)a0;
- (id)fullDescription;
- (id)_encodeProtobuf;
- (id)_initWithProtobuf:(id)a0;
- (id)initWithManagedCredentialItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)markAllPropertiesDirty;
- (id)initWithAccountIdentifier:(id)a0 serviceName:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)clearDirtyProperties;
- (void)_markPropertyDirty:(id)a0;
- (BOOL)isPropertyDirty:(id)a0;
- (id)initWithManagedCredentialItem:(id)a0 accountStore:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setServiceName:(id)a0;
- (void).cxx_destruct;

@end
