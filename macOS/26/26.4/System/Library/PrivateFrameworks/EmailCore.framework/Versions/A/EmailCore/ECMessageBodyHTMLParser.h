@class NSString, ECPriceFormattingThresholds, NSObject, NSScanner;
@protocol OS_os_log;

@interface ECMessageBodyHTMLParser : ECMessageBodyParser <EFSignpostable> {
    NSScanner *_scanner;
    ECPriceFormattingThresholds *_priceFormattingThresholds;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)parse;
- (void)dealloc;
- (void)_consumeNodesFromNode:(id)a0 upToNode:(id)a1;
- (void)_findBody;
- (BOOL)_isMilestoneTagName:(id)a0;
- (void)didFindError:(id)a0;
- (id)initWithHTML:(id)a0;
- (id)initWithHTML:(id)a0 withPriceFormattingThresholds:(id)a1;
- (Class)messageBodyElementClass;
- (unsigned long long)messageBodyStringAccumulatorDefaultOptions;

@end
