@class NSError;

@interface _PHValidation : NSObject {
    unsigned long long _requestedOptions;
    unsigned long long _validatedOptions;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (char)isValid:(id *)a0;
- (void)assert:(char)a0 code:(long long)a1 format:(id)a2;
- (void)assert:(char)a0 error:(id)a1;
- (void)validateOption:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
