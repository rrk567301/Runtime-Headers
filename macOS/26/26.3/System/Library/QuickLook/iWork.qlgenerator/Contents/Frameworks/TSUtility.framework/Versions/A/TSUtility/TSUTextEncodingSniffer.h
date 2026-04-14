@interface TSUTextEncodingSniffer : NSObject {
    unsigned long long _encodingsCount;
    unsigned int *_encodings;
    struct OpaqueTECSnifferObjectRef { } *_sniffer;
}

- (id)init;
- (void)dealloc;
- (id)sniff:(id)a0;

@end
