@class NSString;

@interface SKAClientDefinition : NSObject {
    void /* unknown type, empty encoding */ codeSigningIdentifiers;
    void /* unknown type, empty encoding */ allowAllProfiles;
    void /* unknown type, empty encoding */ localProfiles;
    void /* unknown type, empty encoding */ presenceProfiles;
    void /* unknown type, empty encoding */ statusProfiles;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
