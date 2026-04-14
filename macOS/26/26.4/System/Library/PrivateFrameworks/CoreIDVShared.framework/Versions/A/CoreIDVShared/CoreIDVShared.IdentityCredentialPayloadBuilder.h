@interface CoreIDVShared.IdentityCredentialPayloadBuilder : NSObject {
    void /* unknown type, empty encoding */ randomDataSize;
    void /* unknown type, empty encoding */ cborDataTag;
    void /* unknown type, empty encoding */ identifierStringData;
    void /* unknown type, empty encoding */ kidRange;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dateProvider;
}

- (void).cxx_destruct;
- (id)init;

@end
