@class NSData;

@interface UARPHashMachine : NSObject {
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _context256;
    struct CC_SHA512state_st { unsigned long long count[2]; unsigned long long hash[8]; unsigned long long wbuf[16]; } _context384;
    struct CC_SHA512state_st { unsigned long long count[2]; unsigned long long hash[8]; unsigned long long wbuf[16]; } _context512;
}

@property (readonly) long long hashAlgorithm;
@property (readonly) NSData *hashValue;

- (void).cxx_destruct;
- (id)initWithAlgorithm:(long long)a0;
- (BOOL)finalizeHash;
- (BOOL)updateHash:(id)a0;

@end
