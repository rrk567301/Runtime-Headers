@interface IDSLinkSelectorPrimarySecondary : NSObject {
    void /* unknown type, empty encoding */ linkSelector;
    void /* unknown type, empty encoding */ _primaryLinkID;
    void /* unknown type, empty encoding */ _duplicationLinkID;
    void /* unknown type, empty encoding */ primaryLink;
    void /* unknown type, empty encoding */ secondaryLink;
}

@property (nonatomic, readonly) char primaryLinkID;
@property (nonatomic, readonly) char duplicationLinkID;

- (void).cxx_destruct;
- (id)init;

@end
