@class NSString, NSUUID;

@interface SiriSharedUI.SiriSharedUISuggestion : _TtCs12_SwiftObject {
    void /* function */ displayText;
    void /* function */ invocationText;
    void /* unknown type, empty encoding */ suggestionId;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ suggestionData;
    void /* unknown type, empty encoding */ autoCompleteData;
    void /* unknown type, empty encoding */ suggestionRequestType;
    void /* unknown type, empty encoding */ toolInvocationData;
    void /* unknown type, empty encoding */ tappedCallback;
    void /* unknown type, empty encoding */ exposureCallback;
    void /* unknown type, empty encoding */ mockIconBundleIdentifier;
}

@property (nonatomic, readonly) NSString *displayText;
@property (nonatomic, readonly) NSString *invocationText;
@property (nonatomic, readonly) NSUUID *suggestionId;

@end
