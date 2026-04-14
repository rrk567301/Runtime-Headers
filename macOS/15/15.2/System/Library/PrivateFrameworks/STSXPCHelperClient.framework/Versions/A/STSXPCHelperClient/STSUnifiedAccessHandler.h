@class STSHelperLibrary, NSString, NSData, STSNFCHandoverHandler;

@interface STSUnifiedAccessHandler : NSObject {
    STSHelperLibrary *_parent;
    NSData *_readerSharedSecret;
    NSData *_endpointIdentifier;
    NSString *_appletIdentifier;
    STSNFCHandoverHandler *_nfcHandoverHandler;
}

- (void).cxx_destruct;

@end
