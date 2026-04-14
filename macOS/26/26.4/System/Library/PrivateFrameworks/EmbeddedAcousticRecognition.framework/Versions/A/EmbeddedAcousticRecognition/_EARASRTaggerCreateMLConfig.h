@class NSString;

@interface _EARASRTaggerCreateMLConfig : NSObject

@property (readonly, nonatomic) NSString *modelFile;
@property (readonly, nonatomic) NSString *tokenSeparator;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithModelFile:(id)a0 tokenSeparator:(id)a1;

@end
