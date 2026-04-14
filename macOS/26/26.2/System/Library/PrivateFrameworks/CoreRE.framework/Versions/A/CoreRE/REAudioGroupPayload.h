@class NSArray, NSObject;
@protocol OS_xpc_object;

@interface REAudioGroupPayload : RESharedResourcePayload {
    NSObject<OS_xpc_object> *_buffer;
}

@property (readonly, nonatomic) NSArray *payloads;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPayloads:(id)a0;

@end
