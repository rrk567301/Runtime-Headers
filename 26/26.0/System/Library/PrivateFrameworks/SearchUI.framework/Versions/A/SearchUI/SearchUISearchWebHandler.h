@class SFSearchWebCommand;

@interface SearchUISearchWebHandler : SearchUIOpenPunchoutHandler

@property (readonly) SFSearchWebCommand *command;

+ (id)webSearchURLForQueryString:(id)a0;

- (id)defaultTitle;
- (id)destinationApplicationIconImage;
- (id)destinationPunchout;

@end
