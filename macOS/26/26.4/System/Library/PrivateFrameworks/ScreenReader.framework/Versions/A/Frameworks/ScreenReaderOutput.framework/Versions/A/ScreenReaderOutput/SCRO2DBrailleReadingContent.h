@class NSString, SCRO2DBrailleData, NSArray;

@interface SCRO2DBrailleReadingContent : NSObject <SCRO2DBrailleContentProtocol> {
    SCRO2DBrailleData *_data;
    NSArray *_strings;
    long long _focusedIndex;
    long long _width;
    long long _height;
    NSArray *_brailleLines;
    NSArray *_beginLines;
}

@property (readonly, nonatomic) long long firstDisplayedLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panRight;
- (void).cxx_destruct;
- (void)panLeft;
- (BOOL)canPanLeft;
- (BOOL)canPanRight;
- (void)drawOnCanvas:(id)a0;
- (long long)elementIndexForDisplayLineNumber:(long long)a0;
- (long long)elementIndexForLineNumber:(long long)a0;
- (id)initWithBrailleData:(id)a0 width:(long long)a1 height:(long long)a2 wordWrap:(BOOL)a3;
- (id)initWithBrailleData:(id)a0 width:(long long)a1 height:(long long)a2 wordWrap:(BOOL)a3 previousFirstDisplayedLine:(long long)a4;
- (id)multiLineBraille;

@end
