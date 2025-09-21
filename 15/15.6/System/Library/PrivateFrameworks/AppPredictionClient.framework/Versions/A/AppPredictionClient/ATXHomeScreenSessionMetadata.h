@class NSString;

@interface ATXHomeScreenSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *widgetUniqueId;
@property (retain, nonatomic) NSString *widgetBundleId;
@property (nonatomic) char isWidgetInTodayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWidgetUniqueId:(id)a0 widgetBundleId:(id)a1 isWidgetInTodayView:(char)a2;
- (char)isEqualToATXHomeScreenSessionMetadata:(id)a0;

@end
