@class NSString, NSDate;

@interface _AMTextEditPrintSettings : SBObject

@property long long copies;
@property BOOL collating;
@property long long startingPage;
@property long long endingPage;
@property long long pagesAcross;
@property long long pagesDown;
@property (copy) NSDate *requestedPrintTime;
@property int errorHandling;
@property (copy) NSString *faxNumber;
@property (copy) NSString *targetPrinter;

- (BOOL)exists;
- (void)moveTo:(id)a0;
- (void)delete;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)saveAs:(id)a0 in:(id)a1;

@end
