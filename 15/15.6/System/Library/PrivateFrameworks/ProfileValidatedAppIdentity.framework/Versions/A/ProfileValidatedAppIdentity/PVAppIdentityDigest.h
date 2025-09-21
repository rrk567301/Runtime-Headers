@class NSNumber, NSData, NSError;

@interface PVAppIdentityDigest : NSObject <NSSecureCoding> {
    NSNumber *version;
    NSData *data0;
    NSData *data1;
    NSData *data2;
    NSData *data3;
    NSData *data4;
    NSData *data5;
    NSError *error;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)digestWithErrorCode:(long long)a0;
+ (id)digestWithTimeoutError;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getError;
- (id)asDictionary;
- (id)initWithError:(id)a0 version:(id)a1;
- (id)initWithVersion:(id)a0 data0:(id)a1 data1:(id)a2 data2:(id)a3 data3:(id)a4 data4:(id)a5 data5:(id)a6;

@end
