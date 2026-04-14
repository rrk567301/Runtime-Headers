@interface PKIDSServiceListenerRegistrationKey : NSObject <NSCopying> {
    unsigned short _messageType;
    BOOL _isRequest;
}

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessageType:(unsigned short)a0 isRequest:(BOOL)a1;

@end
