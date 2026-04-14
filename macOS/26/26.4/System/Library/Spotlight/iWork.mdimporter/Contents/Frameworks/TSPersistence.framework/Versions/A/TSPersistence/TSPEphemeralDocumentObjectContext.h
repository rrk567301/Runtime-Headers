@class NSUUID, TSUTemporaryDirectory;

@interface TSPEphemeralDocumentObjectContext : TSPObjectContext {
    TSUTemporaryDirectory *_temporaryDirectory;
    NSUUID *_ephemeralDocumentIdentifier;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 ephemeralDocumentIdentifier:(id)a1;
- (void)p_setDocumentProperties;

@end
