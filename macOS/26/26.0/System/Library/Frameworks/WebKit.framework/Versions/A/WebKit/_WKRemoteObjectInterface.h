@class NSString, Protocol;

@interface _WKRemoteObjectInterface : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _identifier;
    struct HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes, WTF::FastMalloc> { struct HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo>>, WTF::DefaultHash<SEL *>, WTF::HashMap<SEL *, MethodInfo>::KeyValuePairTraits, WTF::HashTraits<SEL *>, WTF::FastMalloc> { void *m_table; } m_impl; } _methods;
}

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSString *identifier;

+ (id)remoteObjectInterfaceWithProtocol:(id)a0;

- (id)debugDescription;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (const void *)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)a0;
- (const void *)_allowedArgumentClassesForSelector:(SEL)a0;
- (id)_invocationForReplyBlockOfSelector:(SEL)a0;
- (id)_invocationForSelector:(SEL)a0;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1;
- (id)initWithProtocol:(id)a0 identifier:(id)a1;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2;

@end
