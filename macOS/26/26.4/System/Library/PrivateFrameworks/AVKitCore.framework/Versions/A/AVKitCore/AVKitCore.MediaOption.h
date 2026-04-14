@class NSString;

@interface AVKitCore.MediaOption : NSObject <MediaOptionSource> {
    void /* function */ avkit_displayName;
    void /* unknown type, empty encoding */ avkit_characteristics;
    void /* unknown type, empty encoding */ avkit_isAutoOption;
    void /* unknown type, empty encoding */ avkit_isOffOption;
    void /* unknown type, empty encoding */ avkit_isOnOption;
    void /* unknown type, empty encoding */ avkit_extendedLanguageTag;
    void /* function */ avkit_identifier;
    void /* unknown type, empty encoding */ subMediaOptions;
}

@property (nonatomic, readonly) NSString *avkit_displayName;
@property (nonatomic, readonly) long long avkit_type;
@property (nonatomic, readonly) long long avkit_subtype;
@property (nonatomic, readonly) NSString *avkit_identifier;
@property (nonatomic, readonly) BOOL avkit_isAvailable;

- (void).cxx_destruct;
- (id)init;

@end
