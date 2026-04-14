@class NSUUID, NSData, NSError, NSObject;
@protocol OS_xpc_object;

@interface ISGenerationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_xpc_object> *sharedMemory;
@property (readonly) NSData *data;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;
@property (readonly) NSError *error;

- (id)initWithError:(id)a0;
- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)initWithCoder:(id)a0;

@end
