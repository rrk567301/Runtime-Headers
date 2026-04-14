@class NSUUID, LAUserCredentialHash;

@interface ODLAUserCredentialHash : NSObject {
    LAUserCredentialHash *_underlying;
}

@property (readonly, nonatomic) NSUUID *uuid;

- (void)dealloc;
- (id)initWithUUID:(id)a0 passwordHash:(id)a1;

@end
