@class PKPassIngestionProperties, NSData, PKFileDescriptorXPCContainer, PKPass;

@interface PKPassIngestionPayload : NSObject <NSSecureCoding> {
    NSData *_data;
    PKFileDescriptorXPCContainer *_fd;
    PKPass *_pass;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPassIngestionProperties *properties;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFileDescriptor:(int)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithData:(id)a0 fileDescriptor:(id)a1 pass:(id)a2;
- (id)createPass;
- (id)initWithPass:(id)a0;

@end
