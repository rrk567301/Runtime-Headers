@class NSString, SCRElement;

@interface _SCRApplicationWindowGuideEntry : NSObject

@property (retain, nonatomic) SCRElement *_windowElement;
@property (copy, nonatomic) NSString *_titleForGuide;
@property (nonatomic) BOOL _current;

- (void).cxx_destruct;

@end
