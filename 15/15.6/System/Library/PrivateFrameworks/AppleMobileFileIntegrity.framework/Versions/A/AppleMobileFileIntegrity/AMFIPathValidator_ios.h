@class NSString, NSData, NSError, NSURL, NSNumber;

@interface AMFIPathValidator_ios : NSObject {
    NSURL *_url;
    NSNumber *_offset;
    int _flags;
    char _validated;
    unsigned long long _bootargs;
    NSData *_cdhash;
    NSData *_profileData;
    NSData *_profileAuxSig;
    NSString *_profileID;
}

@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned int signerType;
@property (readonly, nonatomic) char areEntitlementsValidated;
@property (readonly, nonatomic) NSData *profileData;
@property (readonly, nonatomic) NSData *profileAuxSig;
@property (readonly, nonatomic) NSString *profileID;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)validateWithError:(id *)a0;
- (char)computedCdHash:(unsigned char[20])a0;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1 withFlags:(int)a2;
- (id)initWithURL:(id)a0 withFileOffsetAsNumber:(id)a1 withFlags:(int)a2;
- (id)initWithURL:(id)a0 withFlags:(int)a1;
- (int)isSignerType;

@end
