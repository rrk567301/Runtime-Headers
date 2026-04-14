@interface NSDiagnosticsHandler : NSObject {
    unsigned long long _handle;
    id /* block */ _provider;
    char *_path;
    char *_title;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)handler:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)initWithSubsystem:(const char *)a0 category:(const char *)a1 provider:(id /* block */)a2;

@end
