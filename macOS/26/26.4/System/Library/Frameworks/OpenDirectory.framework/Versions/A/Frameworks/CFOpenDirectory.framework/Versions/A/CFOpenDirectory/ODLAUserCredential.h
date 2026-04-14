@class NSUUID, LAUserCredential;

@interface ODLAUserCredential : NSObject {
    LAUserCredential *_underlying;
}

@property (readonly, nonatomic) NSUUID *uuid;

- (void)dealloc;
- (id)initWithUUID:(id)a0 password:(id)a1;

@end
