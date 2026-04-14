@protocol MTLBuffer;

@interface CP_OBJECT_cp_setting_properties_link : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long linkID;
@property BOOL isPresenting;
@property (retain) id<MTLBuffer> colorManagementBuffer;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initPrivate;

@end
