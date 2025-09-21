@class NSString, NSArray;

@interface WBSBrowsingDataImportData : NSObject

@property (nonatomic) unsigned long long numberOfItemsSuccessfullyImported;
@property (nonatomic) unsigned long long numberOfItemsFailedToImport;
@property (readonly, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSArray *extensionLockupViews;

- (id)combine:(id)a0;
- (void).cxx_destruct;
- (id)initWithNumberOfItemsSuccessfullyImported:(unsigned long long)a0 numberOfItemsFailedToImport:(unsigned long long)a1 errorMessage:(id)a2;

@end
