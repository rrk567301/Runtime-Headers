@class NSString, NSData;

@interface _WKAuthenticationExtensionsLargeBlobInputs : NSObject <_WKAuthenticationExtensionsLargeBlobInputsStaging>

@property (copy, nonatomic) NSString *support;
@property (nonatomic) BOOL read;
@property (copy, nonatomic) NSData *write;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
