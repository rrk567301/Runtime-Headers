@interface vCard.CNVCardTagInclusionRestrictedPolicy : NSObject <vCard.CNVCardTagInclusionPolicy> {
    void /* unknown type, empty encoding */ tags;
}

@property (nonatomic) BOOL shouldCaptureUnknownTags;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldParseTag:(id)a0;

@end
