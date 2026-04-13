@class NSString, NSArray;

@interface PXStoryAlertConfiguration : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *actionTitles;
@property (nonatomic) BOOL appendCancelAction;

- (void).cxx_destruct;

@end
