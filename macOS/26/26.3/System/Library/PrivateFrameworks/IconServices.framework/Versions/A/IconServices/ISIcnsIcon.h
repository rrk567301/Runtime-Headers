@class NSData, ISIcns;

@interface ISIcnsIcon : ISConcreteIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *icnsData;
@property (retain) ISIcns *internalICNS;
@property (readonly) ISIcns *icns;

- (id)initWithIcns:(id)a0;
- (id)makeResourceProvider;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContentOfURL:(id)a0;
- (id)initWithIcnsData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)icns;

@end
