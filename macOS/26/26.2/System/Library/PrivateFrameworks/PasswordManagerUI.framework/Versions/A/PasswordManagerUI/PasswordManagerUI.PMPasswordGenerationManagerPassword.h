@class NSString;

@interface PasswordManagerUI.PMPasswordGenerationManagerPassword : NSObject <PMStrongPassword> {
    void /* unknown type, empty encoding */ kind;
    void /* function */ value;
}

@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *localizedName;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
