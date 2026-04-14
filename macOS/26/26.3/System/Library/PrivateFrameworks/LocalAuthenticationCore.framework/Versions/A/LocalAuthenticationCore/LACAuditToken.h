@class NSData, NSString, NSNumber;

@interface LACAuditToken : NSObject {
    NSString *_signingID;
    NSNumber *_belongsToPlatformBinary;
}

@property (readonly, nonatomic) struct { unsigned int val[8]; } rawValue;
@property (readonly, nonatomic) NSData *data;

+ (id)nullInstance;

- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRawValue:(struct { unsigned int x0[8]; })a0;
- (id)belongsToPlatformBinary:(id *)a0;
- (id)signingID:(id *)a0;

@end
