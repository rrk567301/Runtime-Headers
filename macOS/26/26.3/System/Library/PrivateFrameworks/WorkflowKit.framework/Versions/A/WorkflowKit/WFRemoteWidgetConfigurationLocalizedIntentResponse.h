@class NSData, NSString, INIntent;

@interface WFRemoteWidgetConfigurationLocalizedIntentResponse : WFRemoteWidgetConfigurationResponse

@property (retain, nonatomic) NSData *localizedIntentData;
@property (readonly, nonatomic) INIntent *localizedIntent;
@property (readonly, nonatomic) NSString *languageCode;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocalizedIntentRepresentation:(id)a0 languageCode:(id)a1 error:(id)a2;

@end
