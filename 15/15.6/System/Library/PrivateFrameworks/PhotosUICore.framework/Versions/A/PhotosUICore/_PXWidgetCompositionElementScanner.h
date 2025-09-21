@class NSArray;

@interface _PXWidgetCompositionElementScanner : NSObject <_PXWidgetCompositionRow> {
    long long _scanLocation;
    struct _NSRange { unsigned long long location; unsigned long long length; } _scannedRowRange;
}

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) id /* block */ wantsEdgeToEdgeLayoutBlock;
@property (nonatomic) double referenceWidth;
@property (nonatomic) double interColumnSpacing;
@property (nonatomic) long long maximumNumberOfColumns;
@property (readonly, nonatomic, getter=isAtEnd) char atEnd;
@property (readonly, nonatomic) long long numberOfColumns;

- (void).cxx_destruct;
- (void)enumerateElementsUsingBlock:(id /* block */)a0;
- (char)_wantsEdgeToEdgeLayoutForElement:(id)a0;
- (char)scanRow:(out id *)a0;

@end
