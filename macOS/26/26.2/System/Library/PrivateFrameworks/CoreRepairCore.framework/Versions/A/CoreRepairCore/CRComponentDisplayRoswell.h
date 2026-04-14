@class NSString;

@interface CRComponentDisplayRoswell : CRComponentBase {
    NSString *identifierBase64;
}

+ (id)sharedSingleton;

- (id)_init;
- (void).cxx_destruct;
- (id)init;
- (id)identifierBase64;
- (void)setIdentifierBase64:(id)a0;

@end
