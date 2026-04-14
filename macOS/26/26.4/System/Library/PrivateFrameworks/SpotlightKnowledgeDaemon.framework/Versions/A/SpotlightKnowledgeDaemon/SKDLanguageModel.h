@class NSString;

@interface SKDLanguageModel : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _LanguageModel { } *model;
@property (nonatomic) double lastAccessed;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
