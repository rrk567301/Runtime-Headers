@interface HDAMikeyInterface : HDAInterface {
    BOOL mInternalMikey;
}

- (void)dealloc;
- (id)init;
- (BOOL)available;
- (void)tearDownUserClient;
- (int)setupNewUserClient:(const char *)a0 builtIn:(BOOL)a1;
- (unsigned int)lookup_device:(const char *)a0 Name:(const char *)a1;
- (int)mikeyType:(unsigned int *)a0;
- (int)getState:(unsigned int)a0 subSel:(unsigned int)a1 value3:(unsigned int)a2 value4:(unsigned int)a3 value5:(unsigned int)a4 bufferPtr:(void *)a5;
- (int)setState:(unsigned int)a0 subSel:(unsigned int)a1 value3:(unsigned int)a2 value4:(unsigned int)a3 value5:(unsigned int)a4 bufferPtr:(void *)a5;
- (int)setupUserClient;
- (int)supportsChinaHeadset:(BOOL *)a0;
- (int)peripheralDetect:(BOOL *)a0;
- (int)chinaHeadsetMode:(BOOL *)a0;
- (int)triggerJackDetection:(BOOL)a0;
- (int)ldoState:(char *)a0;

@end
