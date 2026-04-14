@class NSUUID, LAUserPasswordHash;

@interface LAUserCredentialHash : NSObject {
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, readonly) LAUserPasswordHash *passwordHash;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUUID:(id)a0 passwordHash:(id)a1;

@end
