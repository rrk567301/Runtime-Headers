@class WFMenuItem, NSString;

@interface WFNSMenuItem : NSMenuItem <WFPlatformMenuItem>

@property (retain, nonatomic) WFMenuItem *wfMenuItem;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) BOOL shouldShowState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)generateAttributedStringForText:(id)a0 font:(id)a1 color:(id)a2 showingMatches:(BOOL)a3 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
