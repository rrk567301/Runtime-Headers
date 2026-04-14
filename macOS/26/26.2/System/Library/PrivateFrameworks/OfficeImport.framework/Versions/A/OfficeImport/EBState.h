@class EDResources, EDWorkbook;
@protocol TCCancelDelegate;

@interface EBState : NSObject {
    void *mXlLinkTable;
    void *mXlNameTable;
    void *mSheetNames;
    void *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
}

@property (readonly, nonatomic) id<TCCancelDelegate> cancelDelegate;

- (BOOL)isCancelled;
- (void).cxx_destruct;
- (void)setResources:(id)a0;
- (id)resources;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)a0;
- (void)setWorkbook:(id)a0;
- (void *)sheetNames;
- (id)workbook;
- (void *)xlFormulaProcessor;
- (void *)xlLinkTable;
- (void *)xlNameTable;

@end
