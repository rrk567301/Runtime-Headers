@class NSString, NSMutableDictionary, NSSet;

@interface ACSHSymbolDrawingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *_symbolFontsByRect;
@property (copy, nonatomic) NSString *_tallestSymbolName;
@property (copy, nonatomic) NSString *_widestSymbolName;
@property (nonatomic) double weight;
@property (copy, nonatomic) NSSet *symbolNames;

+ (id)imageWithSymbolName:(id)a0 size:(double)a1 weight:(double)a2;
+ (id)_systemFontOfSize:(double)a0 weight:(double)a1;

- (void).cxx_destruct;
- (void)_calculateWidestAndTallestSymbols;
- (void)_calculateWidestAndTallestSymbolsIfNeeded;
- (id)_calculateSymbolFontForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_symbolNamesUpdated;
- (id)initWithWeight:(double)a0;
- (double)symbolFontSizeForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
