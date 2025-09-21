@class NSURL, NSData, NSString;

@interface _WKWebPushMessage : NSObject <WKObject> {
    struct AlignedStorage<API::WebPushMessage, 8UL> { struct Storage { unsigned char data[232]; } m_storage; } _message;
}

@property (readonly, nonatomic) NSURL *scopeURL;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *partition;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scope;
- (void)dealloc;
- (struct Ref<API::WebPushMessage, WTF::RawPtrTraits<API::WebPushMessage>, WTF::DefaultRefDerefTraits<API::WebPushMessage>> { struct WebPushMessage *x0; })_protectedMessage;

@end
