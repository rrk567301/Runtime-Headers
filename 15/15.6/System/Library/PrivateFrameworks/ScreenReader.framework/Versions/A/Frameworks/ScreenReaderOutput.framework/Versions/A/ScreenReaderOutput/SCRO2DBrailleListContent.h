@class NSString, SCRO2DBrailleData, NSArray;

@interface SCRO2DBrailleListContent : NSObject <SCRO2DBrailleContentProtocol> {
    char _itemPreviewMode;
    SCRO2DBrailleData *_data;
    NSArray *_strings;
    NSArray *_brailleLineLists;
    long long _focusedIndex;
    long long _width;
    long long _height;
    long long _firstDisplayedLine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)panLeft;
- (char)canPanLeft;
- (char)canPanRight;
- (void)drawOnCanvas:(id)a0;
- (id)initWithBrailleData:(id)a0 canvas:(id)a1 wordWrap:(char)a2;
- (void)panRight;

@end
