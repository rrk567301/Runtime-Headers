@class NSData;

@interface LAUserPasswordHash : NSObject {
    void /* function */ hashData;
    void /* function */ salt;
}

@property (nonatomic, readonly) NSData *hashData;
@property (nonatomic, readonly) long long iterations;
@property (nonatomic, readonly) NSData *salt;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPBKDF2HashData:(id)a0 iterations:(long long)a1 salt:(id)a2;

@end
