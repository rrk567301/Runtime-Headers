@class WDHTTPDriverInterface;

@interface WDSessionCapabilityParser : NSObject <WDSessionCapabilityParsing> {
    WDHTTPDriverInterface *_driver;
}

- (id)initWithDriver:(id)a0;
- (void).cxx_destruct;
- (id)extractCapabilitiesFromSession:(id)a0;
- (BOOL)_ensurePayload:(id)a0 hasOptionalParameter:(id)a1 ofType:(long long)a2;
- (BOOL)_translateCapability:(id)a0 withValue:(id)a1 intoOptions:(id)a2;
- (id)matchCapabilities:(id)a0 error:(id *)a1;
- (id)mergeCapabilities:(id)a0 withCapabilities:(id)a1 error:(id *)a2;
- (id)processCapabilities:(id)a0 error:(id *)a1;
- (id)translateCapabilitiesIntoSessionOptions:(id)a0 error:(id *)a1;
- (BOOL)validateCapabilities:(id)a0 error:(id *)a1;

@end
