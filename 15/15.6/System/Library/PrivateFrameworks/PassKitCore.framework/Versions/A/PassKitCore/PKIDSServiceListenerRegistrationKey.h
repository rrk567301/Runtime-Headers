@interface PKIDSServiceListenerRegistrationKey : NSObject <NSCopying> {
    unsigned short _messageType;
    char _isRequest;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithMessageType:(unsigned short)a0 isRequest:(char)a1;

@end
