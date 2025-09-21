@class NSArray, MPNowPlayingInfoLanguageOption;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject

@property (readonly, nonatomic) void *mrLanguageOptionGroup;
@property (readonly, nonatomic) NSArray *languageOptions;
@property (readonly, nonatomic) MPNowPlayingInfoLanguageOption *defaultLanguageOption;
@property (readonly, nonatomic) char allowEmptySelection;

- (void)dealloc;
- (id)languageOptions;
- (char)allowEmptySelection;
- (id)defaultLanguageOption;
- (id)initWithLanguageOptions:(id)a0 defaultLanguageOption:(id)a1 allowEmptySelection:(char)a2;
- (id)initWithMRLanguageOptionGroup:(void *)a0;

@end
