@class NSData, NSString, INIntent;

@interface WFRemoteWidgetConfigurationLocalizedIntentResponse : WFRemoteWidgetConfigurationResponse

@property (retain, nonatomic) NSData *localizedIntentData;
@property (readonly, nonatomic) INIntent *localizedIntent;
@property (readonly, nonatomic) NSString *languageCode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedIntentRepresentation:(id)a0 languageCode:(id)a1 error:(id)a2;

@end
