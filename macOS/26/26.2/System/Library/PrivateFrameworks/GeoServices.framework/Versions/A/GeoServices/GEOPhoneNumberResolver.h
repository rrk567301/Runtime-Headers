@class PNRPhoneNumberResolver;

@interface GEOPhoneNumberResolver : NSObject {
    PNRPhoneNumberResolver *_resolver;
}

+ (id)sharedResolver;

- (void).cxx_destruct;
- (id)init;
- (void)resolvePhoneNumbers:(id)a0 handler:(id /* block */)a1 queue:(id)a2;

@end
