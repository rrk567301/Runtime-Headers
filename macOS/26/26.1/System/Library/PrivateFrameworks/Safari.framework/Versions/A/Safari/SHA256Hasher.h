@interface SHA256Hasher : NSObject {
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _context;
}

+ (id)hashWithInput:(const void *)a0 length:(unsigned long long)a1;

- (void)addData:(id)a0;
- (id)init;
- (void)addBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)computeHash:(id)a0;

@end
