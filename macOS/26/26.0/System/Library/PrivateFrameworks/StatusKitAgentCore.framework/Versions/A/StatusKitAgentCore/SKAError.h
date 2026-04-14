@class NSString;

@interface SKAError : NSObject {
    void /* unknown type, empty encoding */ code;
    void /* unknown type, empty encoding */ customDescription;
    void /* unknown type, empty encoding */ underlyingError;
    void /* unknown type, empty encoding */ userInfo;
}

@property (nonatomic, readonly) NSString *description;

+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0;
+ (long long)errorCodeFrom:(int)a0;
+ (id)errorWithCode:(long long)a0 customDescription:(id)a1;
+ (id)errorWithCode:(long long)a0 customDescription:(id)a1 underlyingError:(id)a2;
+ (id)errorWithResponseStatus:(int)a0;
+ (id)errorWithResponseStatus:(int)a0 retryInterval:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;

@end
