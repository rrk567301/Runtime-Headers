@class _EXExtensionInstanceIdentifier, _EXCapabilitySessionIdentity, _EXExtensionIdentity;

@interface _EXCapabilityHostSessionConfiguration : NSObject {
    void /* unknown type, empty encoding */ _inner;
}

@property (nonatomic, retain) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, retain) _EXCapabilitySessionIdentity *sessionIdentity;
@property (nonatomic, retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithExtensionIdentity:(id)a0 sessionIdentity:(id)a1 invalidationHandler:(id /* block */)a2;

@end
