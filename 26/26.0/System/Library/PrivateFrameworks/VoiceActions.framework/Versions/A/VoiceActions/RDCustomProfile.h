@class NSString, _EARUserProfileBuilder;

@interface RDCustomProfile : NSObject {
    _EARUserProfileBuilder *_builder;
    NSString *_langugage;
    NSString *_assetPath;
}

+ (id)createContactProfile:(id)a0 config:(id)a1 lang:(id)a2 isJit:(BOOL)a3;

- (void).cxx_destruct;
- (id)pronunciationsForOrthography:(id)a0;
- (id)initWithLanguage:(id)a0 assetPath:(id)a1;

@end
