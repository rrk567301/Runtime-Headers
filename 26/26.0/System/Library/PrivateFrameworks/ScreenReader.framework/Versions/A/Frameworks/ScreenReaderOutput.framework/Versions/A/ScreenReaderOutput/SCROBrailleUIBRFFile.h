@class NSString, NSArray;

@interface SCROBrailleUIBRFFile : NSObject

@property (retain, nonatomic) NSString *unicode;
@property (nonatomic) long long initialLocation;
@property (retain, nonatomic) NSArray *bookmarks;
@property (retain, nonatomic) NSArray *locationMap;

- (void).cxx_destruct;
- (BOOL)_characterIsWhitespaceOrNewLine:(unsigned short)a0;
- (id)initWithBRF:(id)a0 initialLocation:(long long)a1 bookmarks:(id)a2;
- (id)initWithBRF:(id)a0 rawInitialLocation:(long long)a1 rawBookmarks:(id)a2 reflowSize:(long long)a3 shouldWordWrap:(BOOL)a4 shouldStripPageIndicators:(BOOL)a5;

@end
