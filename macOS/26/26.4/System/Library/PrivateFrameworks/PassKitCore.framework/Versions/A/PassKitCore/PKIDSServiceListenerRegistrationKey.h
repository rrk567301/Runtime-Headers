@interface PKIDSServiceListenerRegistrationKey : NSObject <NSCopying> {
    unsigned short _messageType;
    BOOL _isRequest;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMessageType:(unsigned short)a0 isRequest:(BOOL)a1;

@end
