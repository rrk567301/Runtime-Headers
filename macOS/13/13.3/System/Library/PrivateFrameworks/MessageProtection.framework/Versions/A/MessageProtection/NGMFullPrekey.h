@class DHKey, NGMPublicPreKey;

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey;
@property (readonly, nonatomic) NGMPublicPreKey *publicPrekey;

- (id)description;
- (void).cxx_destruct;
- (BOOL)delete;
- (id)initWithPBPrekey:(id)a0 error:(id *)a1;
- (id)initWithPrekeySignedBy:(id)a0 error:(id *)a1;
- (id)pbDevicePrekey;

@end
