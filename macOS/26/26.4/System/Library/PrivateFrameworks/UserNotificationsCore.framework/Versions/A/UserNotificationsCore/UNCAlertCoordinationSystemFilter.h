@class UNCAlertCoordinationSystemFilterImpl;

@interface UNCAlertCoordinationSystemFilter : NSObject {
    UNCAlertCoordinationSystemFilterImpl *_swiftFilter;
}

@property (class, readonly) UNCAlertCoordinationSystemFilter *systemFilter;

- (void).cxx_destruct;
- (id)initWithSwiftFilter:(id)a0;
- (BOOL)shouldShowInSettingsForSectionID:(id)a0;

@end
