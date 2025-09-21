@class GEOPDInlineRapEnablement;

@interface GEOInlineRapEnablement : NSObject {
    GEOPDInlineRapEnablement *_inlineRapEnablement;
}

@property (readonly, nonatomic) char isHoursEditable;
@property (readonly, nonatomic) char isPhoneEditable;
@property (readonly, nonatomic) char isWebsiteEditable;
@property (readonly, nonatomic) char isAddressEditable;
@property (readonly, nonatomic) char isEditable;

- (void).cxx_destruct;
- (id)initWithEnablement:(id)a0;

@end
