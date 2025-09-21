@class NSDictionary;

@interface MFMessageSortingInformation : NSObject

@property (nonatomic) char skipAutomaticSecondarySort;
@property (retain, nonatomic) NSDictionary *sortValues;

- (void)dealloc;

@end
