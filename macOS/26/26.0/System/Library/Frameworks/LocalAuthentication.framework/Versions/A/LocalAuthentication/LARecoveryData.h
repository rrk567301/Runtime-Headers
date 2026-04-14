@class NSUUID, NSData;

@interface LARecoveryData : NSObject {
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSData *data;

+ (id)iCloudRecoveryData:(id)a0;
+ (id)institutionalRecoveryData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUuid:(id)a0 data:(id)a1;

@end
