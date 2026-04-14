@class NSUUID, NSString;

@interface LACAKSIdentityInfo : NSObject {
    void /* unknown type, empty encoding */ uuidWrapper;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) long long lockState;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawInfo:(id)a0 error:(id *)a1;
- (id)initWithUUID:(id)a0 lockState:(long long)a1;

@end
