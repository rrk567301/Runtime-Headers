@class NSString, NSAttributedString;

@interface BlastDoorTranslatedMessagePart : NSObject {
    void /* unknown type, empty encoding */ translatedMessagePart;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_messagePartIndex;
@property (nonatomic, readonly) long long messagePartIndex;
@property (nonatomic, readonly) NSString *sourceLanguage;
@property (nonatomic, readonly) NSString *translationLanguage;
@property (nonatomic, readonly) NSAttributedString *translatedText;

- (void).cxx_destruct;
- (id)init;

@end
