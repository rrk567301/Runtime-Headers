@class NSString, BSObjCProtocol;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {
    NSString *_identifier;
    BSObjCProtocol *_server;
    BSObjCProtocol *_client;
    struct __CFBoolean { } *_clientWaitsForActivation;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long clientMessagingExpectation;
@property (readonly, copy, nonatomic) BSObjCProtocol *server;
@property (readonly, copy, nonatomic) BSObjCProtocol *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interfaceWithIdentifier:(id)a0 configurator:(id /* block */)a1;
+ (id)interfaceWithServer:(id)a0 client:(id)a1;
+ (id)interfaceWithIdentifier:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)invertInterface:(id /* block */)a0;
- (void)setIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
