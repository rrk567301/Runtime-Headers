@class NSString;

@interface ATXAppEntity : NSObject {
    void /* unknown type, empty encoding */ bundleID;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ displayRepresentationTitle;
    void /* unknown type, empty encoding */ displayRepresentationSubtitle;
    void /* unknown type, empty encoding */ displayRepresentationAltText;
    void /* unknown type, empty encoding */ displayRepresentationSynonyms;
    void /* unknown type, empty encoding */ appEntityValue;
    void /* unknown type, empty encoding */ isSelected;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
