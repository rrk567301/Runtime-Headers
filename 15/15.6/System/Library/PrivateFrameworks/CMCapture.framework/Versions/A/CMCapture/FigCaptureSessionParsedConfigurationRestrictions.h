@class NSArray;

@interface FigCaptureSessionParsedConfigurationRestrictions : NSObject

@property (readonly, nonatomic) char allowAllConfigurations;
@property (readonly, nonatomic) NSArray *allowedConnectionMediaTypes;
@property (readonly, nonatomic) NSArray *allowedConnectionMetadataIdentifiers;

- (void)dealloc;
- (id)initWithAllowedAVMediaTypes:(id)a0 clientIsNonStandard:(char)a1;
- (id)initWithClientAuditToken:(struct { unsigned int x0[8]; })a0;

@end
