@interface CtrAccessorySpecificThreadInfoOutput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long threadMeshError;
@property (readonly) unsigned long long threadMeshUnderlyingStatusBitmap;
@property (readonly) long long threadTXError;
@property (readonly) unsigned long long threadTXUnderlyingStatusBitmap;
@property (readonly) unsigned long long threadRXUnderlyingStatusBitmap;
@property (readonly) long long srpError;
@property (readonly) unsigned long long srpUnderlyingStatusBitmap;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessorySpecificThreadInfoOutput:(long long)a0 threadMeshUnderlyingStatusBitmap:(unsigned long long)a1 threadTXError:(long long)a2 threadTXUnderlyingStatusBitmap:(unsigned long long)a3 threadRXUnderlyingStatusBitmap:(unsigned long long)a4 srpError:(long long)a5 srpUnderlyingStatusBitmap:(unsigned long long)a6;

@end
