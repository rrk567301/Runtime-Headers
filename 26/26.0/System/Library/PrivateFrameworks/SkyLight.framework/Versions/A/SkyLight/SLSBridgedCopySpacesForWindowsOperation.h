@class NSArray;

@interface SLSBridgedCopySpacesForWindowsOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned int options;
@property (readonly, copy) NSArray *windows;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned int)a0 windows:(id)a1;
- (id)invokeFallback;
- (id)makeResultWithNumbers:(id)a0;

@end
